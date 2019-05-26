#include "Rectangle.h"

Rectangle2D::Rectangle2D()
{
	vertices[0].SetVector(0.0f, 0.0f);
	vertices[1].SetVector(100.0f, 0.0f);
	vertices[2].SetVector(0.0f, 100.0f);
	vertices[3].SetVector(100.0f, 100.0f);
}

Rectangle2D::Rectangle2D(Vec2 p1, Vec2 p2, Vec2 p3, Vec2 p4)
{
	vertices[0] = p1;
	vertices[1] = p2;
	vertices[2] = p3;
	vertices[3] = p4;
}

Rectangle2D::Rectangle2D(float p1x, float p1y, float p2x, float p2y, float p3x, float p3y, float p4x, float p4y)
{
	vertices[0].SetVector(p1x, p1y);
	vertices[1].SetVector(p2x, p2y);
	vertices[2].SetVector(p3x, p3y);
	vertices[3].SetVector(p4x, p4y);
}

void Rectangle2D::Draw()
{
	glColor3f(red, green, blue, 1.0f);
	glVertex2f(vertices[0].GetX(), vertices[0].GetY());
	glVertex2f(vertices[1].GetX(), vertices[1].GetY());
	glVertex2f(vertices[2].GetX(), vertices[2].GetY());

	glVertex2f(vertices[1].GetX(), vertices[1].GetY());
	glVertex2f(vertices[3].GetX(), vertices[3].GetY());
	glVertex2f(vertices[2].GetX(), vertices[2].GetY());
}