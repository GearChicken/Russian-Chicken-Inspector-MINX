#include "../Graphics/Sprite.h"
#include "../Graphics/EggGenerator.h"
#include <MINX/Vector2.h>

using namespace MINX;
using namespace RussianChickenInspector::Graphics;

namespace RussianChickenInspector
{
	namespace Creatures
	{
		class Egg : public Sprite, public GameComponent
		{
			public:
				const int EGG_SPAWN_CHICKEN_TIME = 60000;
				Egg(Game* game, Vector2 position);
				virtual Rectangle GetCollisionBox();
				virtual void Update(GameTime * gameTime);
				bool ShouldRemoveEgg();
				virtual int EggsGiven();
				bool CanPickUpEgg();
			protected:
				bool removeEgg = false;
				bool canPickUp = true;
			private:
				int timePassed = 0;
		};
	}
}
