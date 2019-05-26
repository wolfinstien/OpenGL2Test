#pragma once
#include "linmath.h"
#include "Drawable.h"

class Triangle2D : Drawable
{
private:
	Vec2		vertices	[3];
public:
				Triangle2D	();
				Triangle2D	(Vec2, Vec2, Vec2);
				Triangle2D	(float, float, float, float, float, float);
				Triangle2D	(float[]);
	void		Draw		();
	void*		GetPoints	();
};