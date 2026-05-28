cmake_minimum_required(
  VERSION 3.10
)

message(STATUS "Starting!")

project(
  AulaCmake
  VERSION 0.1.0
  DESCRIPTION "CMake aula"
)

file(
  GLOB_RECURSE
  MEOW_SRC_FILES
  "./src/*.cpp"
)

add_executable(
  meowgame
  ${MEOW_SRC_FILES}
)

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

target_link_libraries(
  meowgame PRIVATE
  SDL2::SDL2
  OpenGL::OpenGL
  GLEW::GLEW
)

target_include_directories(
  meowgame PRIVATE
  "./src"
)

target_compile_options(
  meowgame PRIVATE
  -O3 # max optimization level 3
)

target_compile_definitions(
  meowgame PRIVATE
  MAJOR_CAT="gandalf"
)

set_target_properties(
  meowgame PROPERTIES
  CXX_STANDARD 17
  RUNTIME_OUTPUT_DIRECTORY "../bin"
)

message(STATUS "Done!")
