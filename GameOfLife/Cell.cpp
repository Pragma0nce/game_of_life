#include "Cell.h"
#include "Debugger.h"


void Cell::CalculateNewState(vector<vector<Cell>> &map)
{
	int x = pos.x;
	int y = pos.y;
	int neighbors = 0;

		// ERROR CHECK FOR OUT OF BOUNDS
	try {
		if (map.at(y+1).at(x).IsAlive())
			neighbors++;
		if (map.at(y - 1).at(x).IsAlive())
			neighbors++;
		if (map.at(y).at(x+1).IsAlive())
			neighbors++;
		if (map.at(y).at(x-1).IsAlive())
			neighbors++;
		if (map.at(y - 1).at(x - 1).IsAlive())
			neighbors++;
		if (map.at(y + 1).at(x + 1).IsAlive())
			neighbors++;
		if (map.at(y - 1).at(x + 1).IsAlive())
			neighbors++;
		if (map.at(y + 1).at(x - 1).IsAlive())
			neighbors++;
	}
	catch (const std::out_of_range& e) {
		
	}
		
	if (map[y][x].IsAlive()) {
		if (neighbors < 2 || neighbors > 3)
		{
			map[y][x].next_state = false;
		}
		else
			map[y][x].next_state = true;
	}
	else
	{
		if (neighbors == 3)
			map[y][x].next_state = true;
	}
}

void Cell::Step(vector<vector<Cell>> &map)
{
	map[pos.y][pos.x].cur_state = next_state;
}

bool Cell::IsAlive()
{
	return (cur_state);
}

void Cell::Display()
{
	if (cur_state == false)
	{
		//cout << ".";
		cout << char(176);
	}
	else if (cur_state == true)
	{
		cout << char(178);
	}
}

Cell::Cell(int x, int y, bool state)
{
	pos.x = x;
	pos.y = y;
	cur_state = state;
	next_state = state;
}

Cell::~Cell()
{
}
