#include "Triangle.h"

Triangle2D::Triangle2D()
{

}

Triangle2D::Triangle2D(Vec2 p1, Vec2 p2, Vec2 p3)
{
	vertices[0] = p1;
	vertices[1] = p2;
	vertices[2] = p3;
}

Triangle2D::Triangle2D(float p1x, float p1y, float p2x, float p2y, float p3x, float p3y)
{
	vertices[0] = Vec2(p1x, p1y);
	vertices[1] = Vec2(p2x, p2y);
	vertices[2] = Vec2(p3x, p3y);
}

Triangle2D::Triangle2D(float points[])
{
	vertices[0] = Vec2(points[0], points[1]);
	vertices[1] = Vec2(points[2], points[3]);
	vertices[2] = Vec2(points[4], points[5]);
}

void Triangle2D::Draw()
{
	glColor3f(red, green, blue, 1.0f);
	glVertex2f(vertices[0].GetX(), vertices[0].GetY());
	glVertex2f(vertices[1].GetX(), vertices[1].GetY());
	glVertex2f(vertices[2].GetX(), vertices[2].GetY());
}