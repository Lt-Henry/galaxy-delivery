
#include "Game.hpp"
#include "Widgets.hpp"

using namespace std;
using namespace com::toxiclabs::galaxy;


Button::Button(string name,Screen * screen,vector<string> & tex_names):ScreenSprite(name,screen)
{
	is_over=false;
	is_click=false;
	
	for(string tn : tex_names)
	{
		textures.push_back(Game::GetGame()->textures[tn]);
	}
	
	SetTexture(textures[0]);
}

Button::~Button()
{
}

void Button::Step(int ms,vector<SDL_Event> & events)
{
	bool over=false;
	bool click=false;
	
	for(SDL_Event event : events)
	{
		switch(event.type)
		{
			case SDL_MOUSEMOTION:
				over=Click(event.motion.x,event.motion.y);
				//Mouse in
				if(is_over==false && over==true)
				{
					is_over=true;
					SetTexture(textures[1]);
				}
	
				//mouse out
				if(is_over==true && over==false)
				{
					is_over=false;
					SetTexture(textures[0]);
				}

			break;
			
			case SDL_MOUSEBUTTONUP:
			
				//mouse up
				if(is_click==true)
				{
					is_click=false;
					
					if(is_over)
						SetTexture(textures[1]);
					else
						SetTexture(textures[0]);
				}
			
			break;
			
			case SDL_MOUSEBUTTONDOWN:
			
				
				click=Click(event.button.x,event.button.y);
				//mouse down
				if(is_click==false && click==true)
				{
					is_click=true;
					SetTexture(textures[2]);
				}
	
				
			break;
		}
	}
	
	
	
	
}

bool Button::IsOver()
{
	return is_over;
}

bool Button::IsClick()
{
	return is_click;
}
