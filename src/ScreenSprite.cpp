

#include "ScreenSprite.hpp"

using namespace std;
using namespace com::toxiclabs::galaxy;


ScreenSprite::ScreenSprite(string name,Screen * screen):Sprite(name)
{
	rendermode=SpriteRenderMode::Screen;
	this->screen=screen;
	
	rectangle.x=0;
	rectangle.y=0;
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

void ScreenSprite::SetPosition(int x,int y, ScreenSpriteCenter center)
{

	int midx,midy;
	
	switch(center)
	{
		case ScreenSpriteCenter::TopLeft:
			rectangle.x=x;
			rectangle.y=y;
		break;
		
		
		case ScreenSpriteCenter::Center:
			midx=rectangle.w/2;
			midy=rectangle.h/2;
			rectangle.x=x-midx;
			rectangle.y=y-midy;
		break;
	}
}

void ScreenSprite::SetTexture(SDL_Texture * texture)
{
	uint32_t format;
	int access;
	
	SDL_QueryTexture(texture,&format,&access,&rectangle.w,&rectangle.h);
	this->texture=texture;
}
