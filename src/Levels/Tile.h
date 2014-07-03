#include <MINX/Vector2.h>
#include <MINX/Rectangle.h>
#include "../Graphics/TextureGenerator.h"
#include "../Graphics/Sprite.h"

using namespace RussianChickenInspector::Graphics;

namespace RussianChickenInspector
{
	namespace Levels
	{
		class Tile : public Sprite
		{
			public:
				const int TILE_SIZE = 32;
				Tile(TextureGenerator* tileTex, Vector2 position, bool solid);
				Rectangle TileRectangle();
				bool IsSolid();
				void SetSolid(bool solid);
				TextureGenerator* TexType();
			private:
				bool solid;
				TextureGenerator* texGen;
				
		};
	}
}
