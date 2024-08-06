#include "Game.h"
#include "../src/GameObject.h"
#include "../src/Engine.h"

GameObject2D player({10, 10}, {20, 20}, RED, Type2D::Circle);
GameObject2D bullet({10, 10}, {5, 5}, RED, Type2D::Square);
const float SPEED = 600;

float deltaTime;

void Game::Start()
{
    
}

void Game::Update()
{
    deltaTime = GetFrameTime();

    if (IsKeyDown(KEY_W))
    {
        player.transform.position.y -= SPEED * deltaTime;
    }

    if (IsKeyDown(KEY_S))
    {
        player.transform.position.y += SPEED * deltaTime;
    }

    if (IsKeyDown(KEY_D))
    {
        player.transform.position.x += SPEED * deltaTime;
    }

    if (IsKeyDown(KEY_A))
    {
        player.transform.position.x -= SPEED * deltaTime;
    }

    if (IsKeyDown(KEY_I))
    {
        Instantiate2D(bullet, player.transform.position);
    }
}

void Game::Render()
{
    player.Render();
}

void Game::Render3D()
{
    
}