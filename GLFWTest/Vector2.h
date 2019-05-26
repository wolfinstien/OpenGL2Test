#pragma once

class Vec2
{
private:
	float	x;
	float	y;

public:
			Vec2();
			Vec2(float, float);

	void	SetVector(float, float);
	void	SetVector(Vec2);
	void	SetX(float);
	void	SetY(float);
	float	GetX();
	float	GetY();

};