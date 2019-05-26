#include "Vector2.h"

Vec2::Vec2()
{
	x = 0.0f;
	y = 0.0f;
}

Vec2::Vec2(float _x, float _y)
{
	x = _x;
	y = _y;
}

void Vec2::SetVector(float _x, float _y)
{
	x = _x;
	y = _y;
}

void Vec2::SetVector(Vec2 vec)
{
	x = vec.GetX();
	y = vec.GetY();
}

void Vec2::SetX(float _x)
{
	x = _x;
}

void Vec2::SetY(float _y)
{
	y = _y;
}

float Vec2::GetX()
{
	return x;
}

float Vec2::GetY()
{
	return y;
}