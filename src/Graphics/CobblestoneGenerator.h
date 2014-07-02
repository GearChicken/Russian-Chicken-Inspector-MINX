#include "TextureGenerator.h"

namespace RussianChickenInspector
{
	namespace Graphics
	{
		class CobblestoneGenerator : public TextureGenerator
		{
			public:
				static TextureGenerator* GetInstance();
			protected:
				Color* GenerateTexData(Color* texData, Color* color, int width, int height);
		};
	}
}
