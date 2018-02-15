#pragma once
#include <vector>
#include "Cell.h"
using namespace std;

class World
{
private:
	int width;
	int height;
public:
	vector<vector<Cell>> map;
	void Print();
	void Update();
	vector<vector<Cell>> *Map() { return &map; };

	World(int, int);
	~World();
};

