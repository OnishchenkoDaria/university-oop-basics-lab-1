#include <iostream>
#include <string>
#include <list>
#include <sstream>
using namespace std;
#pragma once

class Basic abstract
{
protected:
	int Id{};
	string Name;
	int YearOrAge{};
	
public:

	virtual void getInfo();

	virtual void getName();

	string returnName();

	int returnYear();

	virtual void getYear();

	void setYear(int num);

	void setName(string name);
};

