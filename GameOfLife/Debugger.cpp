#include "Debugger.h"



void Debugger::Log(string msg)
{
	log.push_back(msg);
}

void Debugger::Display()
{
	for (auto v : log)
	{
		cout << v << endl;
	}
}

Debugger::Debugger()
{
}


Debugger::~Debugger()
{
}
