#include <MINX/Rectangle.h>
#include <string>

namespace RussianChickenInspector
{
	namespace Creatures
	{
		class Interactable
		{
			virtual void Interact(Creature user);
			virtual bool IsAlive();
			virtual MINX::Rectangle GetCollisionBox();
			virtual std::string GetIdentifier();
		}
	}
}
