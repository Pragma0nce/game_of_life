#pragma once
#include <vector>
#include <iostream>
using namespace std;

struct Position
{
	int x;
	int y;
};

class Cell
{
private:
	bool cur_state;
	bool next_state;
	Position pos;
public:
	void CalculateNewState(vector<vector<Cell>> map);
	void Step();
	bool IsAlive();
	void Display();

	void ChangeState(bool val) { cur_state = val; };
	void ChangeState() { cur_state = !cur_state; };

	void SetPosition(int x, int y);

	Cell(int x, int y, bool state);
	~Cell();
};

