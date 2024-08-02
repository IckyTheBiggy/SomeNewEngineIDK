#include <raylib.h>

enum Type
{
    Cube,
    Circle,
    Triangle
};

struct ObjectTransform
{
    Vector2 position;
    Vector2 rotation;
    Vector2 scale;
};


class GameObject
{
public:
    GameObject(Vector2 position, Vector2 scale, Color color);

    void Render();

	ObjectTransform transform;
  private:
    Color color;
};