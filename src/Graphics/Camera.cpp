#include "Camera.h"

using namespace RussianChickenInspector::Graphics;

glm::mat4 Camera::matrix = glm::mat4(1.0f);
Rectangle Camera::viewBounds = Rectangle(0,0,800,600);

void Camera::Focus(Vector2 focalPoint)
{
	Focus(focalPoint.X, focalPoint.Y);
}

void Camera::Focus(float x, float y)
{
	viewBounds.X = -x + viewBounds.Width / 2.0;
	viewBounds.Y = -y + viewBounds.Height  / 2.0;
	matrix = glm::translate(glm::mat4(1.0f),glm::vec3(viewBounds.X,viewBounds.Y,0));
}

glm::mat4 Camera::GetMatrix()
{
	return matrix;
}

void Camera::SetScreenSize(Rectangle screenSize)
{
	viewBounds.Width = screenSize.Width;
	viewBounds.Height = screenSize.Height;
}

Rectangle Camera::GetViewBounds()
{
	return viewBounds;
}
