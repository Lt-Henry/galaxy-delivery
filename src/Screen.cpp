
#include "Screen.hpp"
#include "Sprite.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace com::toxiclabs::galaxy;


void Screen::Add(Sprite * sprite)
{
	if(sprite->rendermode==SpriteRenderMode::Screen)
	{
		s_sprites.push_back(sprite);
	}

	if(sprite->rendermode==SpriteRenderMode::World)
	{
		w_sprites.push_back(sprite);
	}

}
