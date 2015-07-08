

#ifndef _WIDGETS_
#define _WIDGETS_

#include "ScreenSprite.hpp"

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			class Button: public ScreenSprite
			{
				private:
				
				std::vector<SDL_Texture *> textures;
				
				public:
				
				Button(Screen * screen,std::vector<std::string> & tex_names);
				
			};
		}
	}
}
#endif
