#include "Basic.h"

void Basic::getInfo() {
	cout << "Id:"<< Id<<endl<<"Name: " << Name << endl
		<< "Date: " << YearOrAge << endl;
}

void Basic::getName() {
	cout<< " ' "<< Name << " ' ";
}

string Basic::returnName() {
	return Name;
}

int Basic::returnYear() {
	return YearOrAge;
}

void Basic::getYear() {
	cout<< YearOrAge;
}

void Basic::setYear(int num) {
	this->YearOrAge = num ;
}