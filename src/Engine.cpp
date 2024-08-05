#include "Engine.h"

void Engine::Run(const int windowWidth,
    const int windowHeight,
    const char *title)
{
	InitWindow(windowWidth, windowHeight, title);

	SetTargetFPS(120);

	Camera camera = {0};
	camera.position = {10, 10, 10};
	camera.target = {0, 0, 0};
	camera.up = {0, 1, 0};
	camera.fovy = 60;
	camera.projection = CAMERA_PERSPECTIVE;

    Game game;

    game.Start();

	while (!WindowShouldClose())
	{
        game.Update();

		BeginDrawing();
		ClearBackground(RAYWHITE);
		BeginMode3D(camera);
	
		game.Render3D();

		EndMode3D();

		game.Render();

		EndDrawing();
	}

	CloseWindow();
}