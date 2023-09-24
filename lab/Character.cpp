#include "Character.h"

void Character::getInform() {
	for (string names : Names)
		cout << "Character's Names: " << names << " ";

	cout << "Age: " << Age << endl;

	for (auto iter = Status.begin(); iter != Status.end(); iter++) 
		cout << "Acted in book named " << iter->book << " with a character status: " << iter->characterType;
	
}

void Character::addNames(string name){
	Names.push_back(name);
}