#include <MINX/Game.h>
#include <MINX/Vector2.h>
#include <MINX/Graphics/TextureBatch.h>
#include <MINX/Graphics/Texture2D.h>
#include <vector>
#include <utility>
#include "EggGenerator.h"

using namespace MINX;
using namespace MINX::Graphics;

namespace RussianChickenInspector
{
	namespace Graphics
	{
		class EggFallWindow : public GameComponent
		{
			public:
				EggFallWindow(Game * game);
				void Update(GameTime * gameTime);
				void Draw(TextureBatch * texBatch);
			private:
				vector<pair<Vector2, Color>> eggs;
				Texture2D* eggTex;
		};
	}
}
