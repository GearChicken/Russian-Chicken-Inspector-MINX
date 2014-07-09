#include <MINX/GameComponent.h>
#include <MINX/GameTime.h>
#include <MINX/Vector2.h>
#include <MINX/Input/Keyboard.h>
#include <MINX/Input/Mouse.h>

using namespace MINX;
using namespace MINX::Input;

namespace RussianChickenInspector
{
	namespace Menus
	{
		class MenuControl : public GameComponent
		{
			public:
				virtual void Draw(GameTime* gameTime) = 0;
			protected:
				MenuControl(Vector2 position, Keyboard* keyboard, Mouse* mouse);
				Vector2 position;
				Keyboard* keyboard;
				Mouse* mouse;
		}
	}
}
