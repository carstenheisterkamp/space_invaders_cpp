#include "Game.h"
#include <raylib.h>

int main() {
    constexpr int screenWidth = 1024;
    constexpr int screenHeight = 768;
    InitWindow(screenWidth, screenHeight, "Spice Invader");

    Game game = Game();

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        game.Input();
        game.Update();
        BeginDrawing();
        ClearBackground(BLACK);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}