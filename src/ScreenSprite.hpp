

#ifndef _SCREEN_SPRITE_
#define _SCREEN_SPRITE_


#include "Sprite.hpp"
#include "Screen.hpp"

#include <string>

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			enum class ScreenSpriteCenter{TopLeft,Center};
			
			class ScreenSprite: public Sprite
			{
			
				protected:
					Screen * screen;
					
				public:
				
				ScreenSprite(std::string & name,Screen * screen);
				virtual ~ScreenSprite(){};
				
				
				
				bool Click(int x,int y);
				
				void SetPosition(int x,int y,
				 ScreenSpriteCenter center=ScreenSpriteCenter::Center);
				
				void SetTexture(SDL_Texture * texture);
			};
		}
	}
}
#endif
