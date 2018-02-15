#pragma once
#include <vector>
#include "Cell.h"
using namespace std;

class MapLoader
{
private:
public:
	vector<vector<Cell>> Load(string file);

	MapLoader();
	~MapLoader();
};

