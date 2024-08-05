#include "Game.h"
#include "../src/GameObject.h"

GameObject2D player({10, 10}, {20, 20}, RED, Type2D::Square);
GameObject3D Test3D({0, 0, 0}, {10, 10, 10}, RED, Type3D::Cube);
const float SPEED = 5;

void Game::Start()
{
    
}

void Game::Update()
{
    if (IsKeyDown(KEY_W))
    {
        player.transform.position.y -= SPEED;
    }

    if (IsKeyDown(KEY_S))
    {
        player.transform.position.y += SPEED;
    }

    if (IsKeyDown(KEY_D))
    {
        player.transform.position.x += SPEED;
    }

    if (IsKeyDown(KEY_A))
    {
        player.transform.position.x -= SPEED;
    }
}

void Game::Render()
{
    player.Render();
}

void Game::Render3D()
{
    Test3D.Render();
}