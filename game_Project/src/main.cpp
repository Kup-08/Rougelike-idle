#include <iostream>
#include <raylib.h>
#include "../game_data/game_window.cpp"
#include "../game_data/player.cpp"

int main() {
    InitWindow(WIDTH, HEIGHT, TITLE);
    SetTargetFPS(FPS);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Welcome to Roguelike Idle!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();


    }

    CloseWindow();
}