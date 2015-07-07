

#include "WorldSprite.hpp"

using namespace std;
using namespace com::toxiclabs::galaxy;


WorldSprite::WorldSprite(string name,Screen * screen):Sprite(name)
{
	rendermode=SpriteRenderMode::World;
	this->screen=screen;
}
