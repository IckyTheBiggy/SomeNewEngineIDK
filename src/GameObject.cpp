#include "GameObject.h"

GameObject::GameObject(Vector2 position, Vector2 scale, Color color) 
{
    this->transform.position = position;
    this->transform.scale = scale;
    this->color = color;
}

void GameObject::Render()
{
    DrawRectangleV(transform.position, transform.scale, color);
}