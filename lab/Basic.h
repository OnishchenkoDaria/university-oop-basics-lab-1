#include <iostream>
#include <string>
#include <list>
using namespace std;
#pragma once

class Basic abstract
{
private:
	string Name;
	int YearOrAge;

public:
	
	Basic(string name, int num) {
		Name = name;
		YearOrAge = num;
	}

	virtual void getInfo();
};

