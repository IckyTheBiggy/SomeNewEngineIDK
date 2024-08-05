#include <raylib.h>

enum Type2D
{
    Square,
    Circle,
    Triangle,
    CustomSprite
};

enum Type3D
{
    Cube,
    Sphere,
    Pyramid,
    CustomModel
};

struct ObjectTransform2D
{
    Vector2 position;
    Vector2 rotation;
    Vector2 scale;
};

struct ObjectTransform3D
{
    Vector3 position;
    Vector3 rotation;
    Vector3 scale;
};


class GameObject2D
{
public:
    GameObject2D(Vector2 position, Vector2 scale, Color color, Type2D type);
    void Render();

	ObjectTransform2D transform;
  private:
    Color color;
    Type2D type;
};

class GameObject3D
{
public:
    GameObject3D(Vector3 position, Vector3 scale, Color color, Type3D type);
    void Render();

    ObjectTransform3D transform;

private:
    Color color;
    Type3D type;
};