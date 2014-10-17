
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


bool Sprite::Click(int x,int y)
{
	if(rendermode==SpriteRenderMode::Screen)
	{
		if(x>=rectangle.x && x<=(rectangle.x+rectangle.w))
		{
			if(y>=rectangle.y && y<=(rectangle.y+rectangle.h))
			{
				return true;
			}
		}
	}
	
	return false;
}
