#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Debugger
{
private:
	vector<string> log;
public:
	void Log(string message);
	void Display();

	static Debugger &Get()
	{
		static Debugger instance;
		return instance;
	};
	Debugger(Debugger const&) = delete;
	void operator=(Debugger const&) = delete;

	Debugger();
	~Debugger();
};

