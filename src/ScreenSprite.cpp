

#include "ScreenSprite.hpp"

using namespace std;
using namespace com::toxiclabs::galaxy;


ScreenSprite::ScreenSprite(string & name,Screen * screen):Sprite(name)
{
	rendermode=SpriteRenderMode::Screen;
	this->screen=screen;
}

bool ScreenSprite::Click(int x,int y)
{
	if(x>=rectangle.x && x<=(rectangle.x+rectangle.w))
	{
		if(y>=rectangle.y && y<=(rectangle.y+rectangle.h))
		{
			return true;
		}
	}
	
	return false;
}
