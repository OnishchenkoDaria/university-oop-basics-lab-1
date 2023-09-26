#include "Characters1.h"

void Characters1::getInfo()
{
	Basic::getInfo();

	cout << "Age: " << Age << endl;

	for (string names : Names)
		cout << "Character's Names: " << names << " ";
	for (auto iter = Status.begin(); iter != Status.end(); iter++)

		cout << "Acted in book named " << iter->book << " with a character status: " << iter->characterType;
}
