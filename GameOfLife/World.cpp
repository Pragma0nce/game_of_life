#include "World.h"
#include "Debugger.h"
#include <iostream>
using namespace std;


void World::Print()
{
	for (auto v : map)
	{
		for (auto i : v)
		{
			i.Display();
		}
		cout << endl;
	}

}

void World::Update()
{
	// Calculate new step
	for (auto v : map)
	{
		for (auto i : v)
		{
			i.CalculateNewState(map);
		}
	}

	// Execute new step
	for (auto v : map)
	{
		for (auto i : v)
		{
			i.Step(map);
		}
	}
}

World::World(int width, int height)
	:width(width), height(height)
{
	/*for (int i = 0; i < height; i++)
	{
		vector<Cell> row;
		for (int j = 0; j < width; j++)
		{
			row.push_back(Cell(j,i,0));
		}
		map.push_back(row);
		row.clear();
	}

	// Initial board setup
	map[5][10].ChangeState();
	map[7][10].ChangeState();
	map[7][9].ChangeState();
	map[7][11].ChangeState();
	map[6][11].ChangeState();*/
}


World::~World()
{
}
