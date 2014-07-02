#include <MINX/Graphics/Texture2D.h>
#include <MINX/Graphics/Color.h>
#include <MINX/Vector2.h>

using namespace MINX;
using namespace MINX::Graphics;

namespace RussianChickenInspector
{
	namespace Graphics
	{
		class TextureGenerator
		{
			public:
				static TextureGenerator* GetInstance();
				
				Texture2D* GenerateTexture(Color* color, int width, int height);
			protected:
				TextureGenerator();
				
				static TextureGenerator* instance;
				
				virtual Color* GenerateTexData(Color* texData, Color* color, int width, int height);
				
				inline Color SubtractColor(Color c1, Color c2){return Color(c1.R-c2.R, c1.G-c2.G, c1.B-c2.B, c1.A-c2.A);}
				inline Color AddColor(Color c1, Color c2){return Color(c1.R+c2.R, c1.G+c2.G, c1.B+c2.B, c1.A+c2.A);}
				inline bool LighterThan(Color c1, Color c2){return c1.R+c1.B+c1.G > c2.R+c2.B+c2.G;}
				inline bool DarkerThan(Color c1, Color c2){return c1.R+c1.B+c1.G < c2.R+c2.B+c2.G;}
				Color* AddCircle(Color* texData, int texWidth, int texHeight, int radius, Vector2 position, Color circleColor);
				Color* AddTriangle(Color* texData, int texWidth, int texHeight, Vector2 vertex1, Vector2 vertex2, Vector2 vertex3, Color triColor);
				Color* AddRectangle(Color* texData, int texWidth, int texHeight, Rectangle rect, Color rectColor);
				bool CheckIfPointInTriangle(Vector2 vertex1, Vector2 vertex2, Vector2 vertex3, Vector2 point);
				Vector2 Midpoint(Vector2 p1, Vector2 p2);
		};
	}
}
