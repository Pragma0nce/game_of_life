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
	void CalculateNewState(vector<vector<Cell>> &map);
	void Step(vector<vector<Cell>> &map);
	bool IsAlive();
	void Display();

	void ChangeState(bool val) { cur_state = val; };
	void ChangeState() { if (cur_state == true) cur_state = false; else cur_state = true; };
	void ChangeNextState() { if (next_state == true) next_state = false; else next_state = true; };

	void SetPosition(int x, int y);

	Cell(int x, int y, bool state);
	~Cell();
};

