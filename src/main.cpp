#include <cstdint>
#include <meow/meow.hpp>
#include <SDL2/SDL.h>
#include <GL/glew.h>

int main(int args_len, char **p_args) {
  meow::sound("ayin");

  SDL_Init(SDL_INIT_VIDEO);

  SDL_Window *p_sdl_win {
    SDL_CreateWindow(
      "meow",
      0, 0,
      480, 640,
      SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL
    )
  };

  glewInit();
  SDL_GLContext sdl_gl_context = SDL_GL_CreateContext(p_sdl_win);

  SDL_Event sdl_event {};
  bool mainloop = true;

  while (mainloop) {
    while (SDL_PollEvent(&sdl_event)) {
      if (sdl_event.type == SDL_QUIT) {
        mainloop = false;
      }
    }

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 0.0, 0.0, 1.0);

    SDL_GL_SwapWindow(p_sdl_win);
  }

  return 0;
}
