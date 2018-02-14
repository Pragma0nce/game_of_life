#include <iostream>
#include "World.h"
using namespace std;

int main()
{
	World game(50, 25);
	game.Print();

	char c;
	cin >> c;
	system("cls");
	game.Update();
	game.Print();

	cin >> c;

}