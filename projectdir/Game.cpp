#include "Game.h"
#include "../src/GameObject.h"

GameObject player({10, 10}, {20, 20}, RED);

void Game::Start()
{

}

void Game::Update()
{
    
}

void Game::Render()
{
    player.Render();
}