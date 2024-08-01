#include "Engine.h"

void Engine::Run(const int windowWidth,
    const int windowHeight,
    const char *title)
{
	InitWindow(windowWidth, windowHeight, title);

	SetTargetFPS(120);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);

		EndDrawing();
	}

	CloseWindow();
}