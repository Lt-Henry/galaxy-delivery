

#include "Scenes.hpp"
#include "Game.hpp"
#include "ScreenSprite.hpp"
#include "Widgets.hpp"

#include <iostream>
#include <vector>

using namespace std;
using namespace com::toxiclabs::galaxy;

MenuScreen::MenuScreen():Screen("screen.Menu")
{
	Game::GetGame()->LoadTextures("menu");
	
	ScreenSprite * s = new ScreenSprite("menu.background",this);
	s->SetPosition(0,0,ScreenSpriteCenter::TopLeft);
	s->SetTexture(Game::GetGame()->textures["menu.background"]);
	Add(s);
	
	vector<string> tex_names = {"menu.btn-play","menu.btn-play-over","menu.btn-play-on"};
	
	Button * button = new Button("menu.button.play",this,tex_names);
	button->SetPosition(640,200);
	Add(button);
	
	tex_names = {"menu.btn-exit","menu.btn-exit-over","menu.btn-exit-on"};
	
	button= new Button("menu.button.exit",this,tex_names);
	button->SetPosition(640,300);
	Add(button);
}


MenuScreen::~MenuScreen()
{
}


void MenuScreen::Step(int ms,std::vector<SDL_Event> & events)
{
	Screen::Step(ms,events);
}
