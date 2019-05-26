#pragma once
#include "Drawable.h"

class Rectangle2D : Drawable
{
private:
	Vec2		vertices[4];
public:
				Rectangle2D();
				Rectangle2D(Vec2, Vec2, Vec2, Vec2);
				Rectangle2D(float, float, float, float, float, float, float, float);
				Rectangle2D(float[]);
	void		Draw();
};