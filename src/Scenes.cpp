

#include "Scenes.hpp"
#include "Game.hpp"
#include "ScreenSprite.hpp"

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;

MenuScreen::MenuScreen()
{
	name="screen.Menu";
	Game::GetGame()->LoadTextures("../rsrc/","menu");
	
	ScreenSprite * s = new ScreenSprite("menu.background",this);
	s->SetPosition(0,0,ScreenSpriteCenter::TopLeft);
	s->SetTexture(Game::GetGame()->textures["menu.background"]);
	Add(s);
}


MenuScreen::~MenuScreen()
{
}


void MenuScreen::Step(int ms,std::vector<SDL_Event> & events)
{
	Screen::Step(ms,events);
}
