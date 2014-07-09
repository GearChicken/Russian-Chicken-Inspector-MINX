#include "MenuControl.h"

namespace RussianChickenInspector
{
	namespace Menus
	{
		enum MenuScreenType
		{
			MAIN_MENU,
			GAMEPLAY,
			PAUSED,
			PAUSED_MENU,
			QUESTIONS_MENU,
			CREDITS_MENU,
			WIN_MENU,
			LOSE_MENU
		}
		
		class MenuScreen : GameComponent
		{
			public:
				MenuScreen(MenuScreenType type, Color color, Keyboard* keyboard, Mouse* mouse);
			private:
				
		}
	}
}
