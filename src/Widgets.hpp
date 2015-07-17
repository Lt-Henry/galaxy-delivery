

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
				
				/*!
				 required textures are: normal, over, pressed
				*/
				Button(std::string name,Screen * screen,std::vector<std::string> & tex_names);
				virtual ~Button();
				
				void Step(int ms,std::vector<SDL_Event> & events);
				
				bool IsOver();
				bool IsClick();
			};
			
			
			class Label: public ScreenSprite
			{
				private:
				
				std::string text;
				
				void Build();
				
				public:
				
				Label(std::string name,Screen * screen,std::string text);
				virtual ~Label();
			};
		}
	}
}
#endif
