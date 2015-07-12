
#include "Game.hpp"
#include "Widgets.hpp"

using namespace std;
using namespace net::lliurex::toxiclabs;


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
	for(SDL_Event event : events)
	{
		
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
