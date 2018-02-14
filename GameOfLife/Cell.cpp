#include "Cell.h"



void Cell::CalculateNewState(vector<vector<Cell>> map)
{
	auto x = pos.x;
	auto y = pos.y;
	int neighbors = 0;

	if (cur_state == true)
	{
		// ERROR CHECK FOR OUT OF BOUNDS
		if (map[y + 1][x].IsAlive())
			neighbors++;
		if (map[y - 1][x].IsAlive())
			neighbors++;
		if (map[y][x + 1].IsAlive())
			neighbors++;
		if (map[y][x - 1].IsAlive())
			neighbors++;
		if (map[y - 1][x - 1].IsAlive())
			neighbors++;
		if (map[y + 1][x + 1].IsAlive())
			neighbors++;
		if (map[y - 1][x + 1].IsAlive())
			neighbors++;
		if (map[y + 1][x - 1].IsAlive())
			neighbors++;

		if (neighbors < 2)
			next_state = 0;
	}
}

void Cell::Step()
{
	cur_state = next_state;
}

bool Cell::IsAlive()
{
	return (cur_state);
}

void Cell::Display()
{
	if (cur_state == 0)
		cout << char(176);
	else
		cout << char(178);
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
