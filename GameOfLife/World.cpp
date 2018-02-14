#include "World.h"
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
			i.Step();
		}
	}
}

World::World(int width, int height)
	:width(width), height(height)
{
	for (int i = 0; i < height; i++)
	{
		vector<Cell> row;
		for (int j = 0; j < width; j++)
		{
			row.push_back(Cell(j,i,0));
		}
		map.push_back(row);
		row.clear();
	}

	map[20][20].ChangeState();
	map[5][10].ChangeState();
}


World::~World()
{
}
