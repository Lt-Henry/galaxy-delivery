

#include "Actors.hpp"
#include "Game.hpp"

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;



Ship::Ship():Sprite("com.toxiclabs.galaxy.Ship")
{
	Game * game = Game::GetGame();
	
	texture = game->textures["ship.png"];
	
	Uint32 format;
	int access;
	int w;
	int h;
	
	SDL_QueryTexture(texture,&format,&access,&w,&h);
	
	rectangle.x=50;
	rectangle.y=50;
	rectangle.w=w;
	rectangle.h=h;
	
	rendermode=SpriteRenderMode::World;
	
	cout<<"New ship"<<endl;
}


void Ship::Step(int ms,vector<Event> & events)
{
	for(Event event : events)
	{
		
	}
}
