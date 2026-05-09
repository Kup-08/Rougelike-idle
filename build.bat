@echo off
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x64
if not exist build mkdir build
cl.exe /EHsc /Zi /MD /I"raylib-6.0\include" "game_Project\src\main.cpp" /Fe:"build\RoguelikeIdle.exe" /Fd:"build\\" /link "raylib-6.0\lib\raylib.lib" winmm.lib gdi32.lib user32.lib shell32.lib
