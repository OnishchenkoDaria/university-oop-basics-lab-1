#include "Character1.h"

void Character1::userCreateObj() {
	setYear();
}

void Character1::setNameList() {
	string name;
	cout << "Insert the Name: " << endl;
	cin >> name;
	Names.push_back(name);
}

int Character1::returnId() {
	return Id;
}

void Character1::setId(int num) {
	this->Id = num;
}


void Character1::setStatusList() {
}


