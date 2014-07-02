#include "TextureGenerator.h"

namespace RussianChickenInspector
{
	namespace Graphics
	{
		class VillagerGenerator : public TextureGenerator
		{
			public:
				static TextureGenerator* GetInstance();
			protected:
				Color* GenerateTexData(Color* texData, Color* color, int width, int height);
		};
	}
}