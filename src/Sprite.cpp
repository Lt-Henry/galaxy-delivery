
#include "Sprite.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace com::toxiclabs::galaxy;


Sprite::Sprite(string name)
{
	this->name=name;
	
	texture=nullptr;
	state=SpriteState::Running;
	rendermode=SpriteRenderMode::Screen;
}

Sprite::~Sprite()
{
	
}


void Sprite::Step(int ms,vector<SDL_Event> & events)
{
	
}
