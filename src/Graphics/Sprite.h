#include <MINX/Graphics/Texture2D.h>
#include <MINX/Vector2.h>
#include <MINX/Graphics/Color.h>
#include <MINX/Rectangle.h>
#include <MINX/Graphics/TextureBatch.h>

using namespace MINX;
using namespace MINX::Graphics;

namespace RussianChickenInspector
{
	namespace Graphics
	{
		class Sprite
		{
			public:
				Sprite(Texture2D* texture, Vector2 position, Color tintColor, Rectangle* sourceRect, float rotation, Vector2 rotationOrigin, Vector2 scale);
				inline Sprite(Texture2D* texture, Vector2 position, Color tintColor, Rectangle* sourceRect, float rotation, Vector2 rotationOrigin) : Sprite(texture, position, tintColor, sourceRect, rotation, rotationOrigin, Vector2(1.f,1.f)){}
				inline Sprite(Texture2D* texture, Vector2 position, Color tintColor, Rectangle* sourceRect, float rotation) : Sprite(texture, position, tintColor, sourceRect, rotation, Vector2()){}
				inline Sprite(Texture2D* texture, Vector2 position, Color tintColor, Rectangle* sourceRect) : Sprite(texture, position, tintColor, sourceRect, 0.f){}
				inline Sprite(Texture2D* texture, Vector2 position, Color tintColor) : Sprite(texture, position, tintColor, NULL){}
				inline Sprite(Texture2D* texture, Vector2 position) : Sprite(texture, position, Color(255,255,255)){}
				
				inline Texture2D* GetTexture(){return texture;}
				inline void SetTexture(Texture2D* texture){this->texture = texture;}
				
				inline Vector2 GetPosition(){return position;}
				inline void SetPosition(Vector2 position){this->position = position;}
				
				inline Color GetColor(){return tintColor;}
				inline void SetColor(Color tintColor){this->tintColor = tintColor;}
				
				inline Rectangle* GetSourceRect(){return sourceRect;}
				inline void SetSourceRect(Rectangle* sourceRect){this->sourceRect = sourceRect;}
				
				inline float GetRotation(){return rotation;}
				inline void SetRotation(float rotation){this->rotation = rotation;}
				
				inline Vector2 GetRotationOrigin(){return rotationOrigin;}
				inline void SetRotationOrigin(Vector2 rotationOrigin){this->rotationOrigin = rotationOrigin;}
				
				inline Vector2 GetScale(){return scale;}
				inline void SetScale(Vector2 scale){this->scale = scale;}
				
				inline Vector2 GetCenter(){return GetPosition() + Vector2(texture->GetWidth()/2,texture->GetHeight()/2);}
				
				virtual void Draw(TextureBatch* texBatch);
			private:
				Texture2D* texture;
				Vector2 position;
				Color tintColor;
				Rectangle* sourceRect;
				float rotation;
				Vector2 rotationOrigin;
				Vector2 scale;
		};
	}
}
