### cmake-meow

required: `SDL2`, `GLEW`, `Ninja` and `CMake`.
```
; -S = source
; -B = makefiles build-output
cmake -S . -B ./cmake-build -G Ninja

; --build = built makefiles
cmake --build ./cmake-build

; to execute meowgame
./bin/meowgame 
```
