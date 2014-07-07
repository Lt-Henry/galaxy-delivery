

#include "Actors.hpp"
#include "Game.hpp"

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;



Ship::Ship():Sprite("com.toxiclabs.galaxy.Ship")
{
	Game * game = Game::GetGame();
	
	texture = game->textures["ship.png"];
	
	
}


void Ship::Step(int ms,vector<SDL_Event> & events)
{
	
}
