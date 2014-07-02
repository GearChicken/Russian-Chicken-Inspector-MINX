#include "PhysicsBody.h"

using namespace RussianChickenInspector::Physics;

void PhysicsBody::Update(GameTime * gameTime)
{
	if(abs(velocity.X) < ZERO_VELOCITY_THRESHOLD)
	{
		velocity.X = 0;
	}
	if (abs(velocity.Y) < ZERO_VELOCITY_THRESHOLD)
	{
		velocity.Y = 0;
	}
	SetPosition(GetPosition() + velocity);
	velocity *= DRAG;
}
