#include "MapLoader.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


vector<vector<Cell>> MapLoader::Load(string file)
{
	string line;
	ifstream myfile(file);
	int height = 0;
	vector<vector<Cell>> map;

	if (myfile.is_open())
	{
		int i = 0;
		while (getline(myfile, line))
			height++;
		myfile.close();

		myfile.open(file);
		while (getline(myfile, line))
		{
			vector<Cell> row;
			for (int j = 0; j < line.length(); j++)
			{
				if (line[j] == '.')
					row.push_back(Cell(j, i, 0));
				else
					row.push_back(Cell(j, i, 1));
			}
			map.push_back(row);
			row.clear();
			i++;
		}
		myfile.close();
	}

	return map;
}

MapLoader::MapLoader()
{
}


MapLoader::~MapLoader()
{
}
