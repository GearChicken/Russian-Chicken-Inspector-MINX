#include "TextureGenerator.h"

namespace RussianChickenInspector_MINX
{
	namespace Graphics
	{
		class DirtGenerator : public TextureGenerator
		{
			protected:
				Color* GenerateTexData(Color* texData, Color* color, int width, int height);
		};
	}
}