#pragma once

#include "../projectdir/Game.h"
#include "GameObject.h"
#include <raylib.h>

#include <vector>

class Engine
{
  public:
	void Run(const int widowWidth, const int windowHeight, const char *title);
private:

};

void Instantiate2D(GameObject2D gameObject);
void Instantiate3D(GameObject3D gameObject);

std::vector<GameObject2D> gameObject2DRenderList;
std::vector<GameObject3D> gameObject3DRenderList;