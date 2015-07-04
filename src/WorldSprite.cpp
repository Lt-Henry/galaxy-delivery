

#include "WorldSprite.hpp"



WorldSprite::WorldSprite(std::string & name,Screen * screen):Sprite(name);
{
	rendermode=SpriteRenderMode::World;
	this->screen=screen;
}
