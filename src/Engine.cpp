#include "Engine.h"

void Engine::Run(const int windowWidth,
    const int windowHeight,
    const char *title)
{
	InitWindow(windowWidth, windowHeight, title);

	SetTargetFPS(120);

    Game game;

    game.Start();

	while (!WindowShouldClose())
	{
        game.Update();

		BeginDrawing();
		ClearBackground(RAYWHITE);

        game.Render();

		EndDrawing();
	}

	CloseWindow();
}