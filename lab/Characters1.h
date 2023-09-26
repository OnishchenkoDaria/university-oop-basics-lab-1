#pragma once
#include "Basic.h"

struct status {
	string book;
	string characterType;
};

class Characters1 :
    public Basic
{
private:
	int Age;
	list<string> Names;
	list<status> Status;

public:
	Characters1(int num) :Basic(NULL, num) {

	}
	void getInfo();
};

