

#include "Scenes.hpp"
#include "Game.hpp"
#include "ScreenSprite.hpp"


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
	
	btnPlay = new Button("menu.button.play",this,tex_names);
	btnPlay->SetPosition(640,200);
	Add(btnPlay);
	
	tex_names = {"menu.btn-exit","menu.btn-exit-over","menu.btn-exit-on"};
	
	btnExit = new Button("menu.button.exit",this,tex_names);
	btnExit->SetPosition(640,300);
	Add(btnExit);
}


MenuScreen::~MenuScreen()
{
}


void MenuScreen::Step(int ms,std::vector<SDL_Event> & events)
{
	Screen::Step(ms,events);
	
	if(btnExit->IsClick())
	{
		cout<<"We are leaving!"<<endl;
		Game::GetGame()->Quit();
	}
	
	if(btnPlay->IsClick())
	{
		cout<<"Let's play!"<<endl;
	}
}
