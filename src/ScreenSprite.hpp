

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
			class ScreenSprite: public Sprite
			{
			
				protected:
					Screen * screen;
					
				public:
				
				ScreenSprite(std::string & name,Screen * screen);
				virtual ~ScreenSprite(){};
				
				
				
				bool Click(int x,int y);
			};
		}
	}
}
#endif
