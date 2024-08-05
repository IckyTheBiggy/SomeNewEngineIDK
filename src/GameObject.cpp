#include "GameObject.h"

GameObject2D::GameObject2D(Vector2 position, Vector2 scale, Color color, Type2D type) 
{
    this->transform.position = position;
    this->transform.scale = scale;
    this->color = color;
    this->type = type;
}

void GameObject2D::Render()
{
    switch (type)
    {
        case Type2D::Square:
            DrawRectangleV(transform.position, transform.scale, color);
        break;

        case Type2D::Triangle:
            DrawTriangle({transform.position}, {transform.position}, {transform.position}, color);
        break;

        case Type2D::Circle:
            DrawCircleV(transform.position, 5, color);
    }
}

GameObject3D::GameObject3D(Vector3 position, Vector3 scale, Color color, Type3D type)
{
    this->transform.position = position;
    this->transform.scale = scale;
    this->color = color;
    this->type = type;
    
}

void GameObject3D::Render()
{
    switch (type)
    {
        case Type3D::Cube:
            DrawCubeV(transform.position, transform.scale, color);
        break;

        case Type3D::Pyramid:
        
        break;

        case Type3D::Sphere:
            DrawSphere(transform.position, 5, color);
        break;
    }
}