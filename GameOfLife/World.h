#pragma once
#include <vector>
#include "Cell.h"
using namespace std;

class World
{
private:
	vector<vector<Cell>> map;
	int width;
	int height;
public:
	void Print();
	void Update();

	World(int, int);
	~World();
};

