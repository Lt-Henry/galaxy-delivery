

#include "Game.hpp"

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;

Game * Game::factory = NULL;


Game::Game()
{
	cout<<"Game constructor"<<endl;
}


Game::~Game()
{
	cout<<"Game destructor"<<endl;
}

Game * Game::GetGame()
{
	if(Game::factory==NULL)
		Game::factory = new Game();
		
		return Game::factory;
}

void Game::Free()
{
	if(Game::factory!=NULL)
	{
		delete Game::factory;
	}
}

void Game::Run()
{
	cout<<"Game main loop"<<endl;
}
