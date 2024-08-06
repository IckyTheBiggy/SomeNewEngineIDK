#include "Engine.h";

void Instantiate2D(GameObject2D gameObject)
{
	gameObject2DRenderList.push_back(gameObject);
}

void Instantiate3D(GameObject3D gameObject)
{
	gameObject3DRenderList.push_back(gameObject);
}

void Engine::Run(const int windowWidth,
    const int windowHeight,
    const char *title)
{
	// SetConfigFlags(FLAG_WINDOW_RESIZABLE);

	InitWindow(windowWidth, windowHeight, title);

	SetTargetFPS(500);

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

		for (auto &gameObject3D : gameObject3DRenderList)
		{
			gameObject3D.Render();
		}

		EndMode3D();

		game.Render();

		for (auto &gameObject2D : gameObject2DRenderList)
		{
			gameObject2D.Render();
		}

		EndDrawing();
	}

	CloseWindow();
}
