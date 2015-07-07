

#include "Scenes.hpp"
#include "Game.hpp"
#include "ScreenSprite.hpp"

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;

MenuScreen::MenuScreen():Screen("screen.Menu")
{
	Game::GetGame()->LoadTextures("../rsrc/","menu");
	
	ScreenSprite * s = new ScreenSprite("menu.background",this);
	s->SetPosition(0,0,ScreenSpriteCenter::TopLeft);
	s->SetTexture(Game::GetGame()->textures["menu.background"]);
	Add(s);
	
	s = new ScreenSprite("menu.button.play",this);
	s->SetTexture(Game::GetGame()->textures["menu.btn-play"]);
	s->SetPosition(640,200);
	Add(s);

	s = new ScreenSprite("menu.button.exit",this);
	s->SetTexture(Game::GetGame()->textures["menu.btn-exit"]);
	s->SetPosition(640,300);
	Add(s);
	
}


MenuScreen::~MenuScreen()
{
}


void MenuScreen::Step(int ms,std::vector<SDL_Event> & events)
{
	Screen::Step(ms,events);
}
