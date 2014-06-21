
#include "Game.hpp"

#include <iostream>



using namespace std;
using namespace com::toxiclabs::galaxy;


int main(int argc,char * argv[])
{
	
	cout<<"Galaxy Delivery"<<endl;
	
	Game * game = Game::GetGame();
	
	game->Run();
	
	Game::Free();
	
	return 0;
}
