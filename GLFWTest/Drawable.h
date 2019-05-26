#pragma once

#include "GLFW/glfw3.h"
#include "Vector2.h"

class Drawable
{
private:
	float red, green, blue, alpha;
public:
	virtual void Draw() {};
	void SetColour(float, float, float, float);
};