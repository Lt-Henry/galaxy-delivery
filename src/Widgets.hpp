

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
				
				bool is_over;
				bool is_click;
				
				public:
				
				Button(std::string name,Screen * screen,std::vector<std::string> & tex_names);
				virtual ~Button();
				
				void Step(int ms,std::vector<SDL_Event> & events);
				
				bool IsOver();
				bool IsClick();
			};
		}
	}
}
#endif
