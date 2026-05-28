### cmake-meow

required: `SDL2`, `GLEW`, `Ninja` and `CMake`.

commands to build:
```
; -S = source
; -B = makefiles build-output
cmake -S . -B ./cmake-build -G Ninja

; --build = built makefiles
cmake -B ./cmake-build

; to execute meowgame
./bin/meowgame 
```
