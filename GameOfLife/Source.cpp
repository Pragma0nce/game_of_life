#include <iostream>
#include "World.h"
#include "Debugger.h"
#include "MapLoader.h"
using namespace std;

void Wait()
{
	char x;
	cin >> x;
}

int main()
{
	World game(50, 25);
	MapLoader loader;
	game.map = loader.Load("C:/projects/c++/bootcamp/GameOfLife/Maps/glider-gun.txt");

	game.Print();


	double dt = 0;
	while (true)
	{
		if (dt >= 300)
		{
			game.Update();
			system("cls");
			game.Print();
			dt = 0;
		}
		dt++;
	}

}