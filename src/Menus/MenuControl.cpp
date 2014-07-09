#include "MenuControl.h"

using namespace RussianChickenInspector::Menus;

MenuControl::MenuControl(Vector2 position, Keyboard* keyboard, Mouse* mouse)
{
	this->position = position;
	this->keyboard = keyboard;
	this->mouse = mouse;
}
