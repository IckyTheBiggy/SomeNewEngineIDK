#include <raylib.h>

int main()
{
    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 600;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Window");

    SetTargetFPS(120);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        EndDrawing();
    }
    
    CloseWindow();
}