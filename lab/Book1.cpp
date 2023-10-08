#include "Book1.h"

bool num_check(string input) {
	for (int i = 0; i < input.length(); i++) {
		if (isdigit(input[i]) == false) {
			//cout << "not digit"<<endl;
			return false;
		}
		else {
			//cout<<"success"<<endl;
			return true;
		}

	}
}

int Book1::returnId() {
	return Id;
}

void Book1::setId(int num) {
	this->Id = num;
}

void Book1::setBookYear(int num) {
	this->YearOrAge = num;
}

void Book1::setName() {
	string name;
	cout << "	Insert the Name: " << endl;
	cin >> name;
	this->Name = name;
}
void Book1::setYear() {
	string num_value;
	stringstream ss;
	int year;

	cout << "	Insert the Year: " << endl;
	cin >> num_value;

	while (num_check(num_value) == false) {
		cout << "ONLY NUMBERS please" << endl;
		cin >> num_value;
	}
	ss << num_value;
	ss >> year;

	this->YearOrAge = year;
}

void Book1::setAuthor() {
	string author;
	cout << "	Insert the Author: " << endl;
	cin >> author;
	this->Author = author;
}

void Book1::setPages() {
	string num_value;
	stringstream ss;
	int pages;

	cout << "	Insert the Number of Pages: " << endl;
	cin >> num_value;

	while (num_check(num_value) == false) {
		cout << "ONLY NUMBERS please" << endl;
		cin >> num_value;
	}
	ss << num_value;
	ss >> pages;
		
	this->Pages = pages;
}

void Book1::setDescr() {
	string descr;
	cout << "	Insert the Annotation: " << endl;
	cin >> descr;
	this->Annotation = descr;
}

void Book1::EditItem() {
	cout << "Choose an option: " << endl;
	cout << "	>press <N> to change a Name: " << endl;
	cout << "	>press <Y> to change a Year: " << endl;
	cout << "	>press <P> change a Number of Pages: " << endl;
	cout << "	>press <D> to change a Annotation: " << endl;
	char choice;
	cin >> choice;

	switch (choice) {
	case 'N':
		setName();
		break;
	case 'Y':
		setYear();
		break;
	case 'A':
		setAuthor();
		break;
	case 'P':
		setPages();
		break;
	case 'D':
		setDescr();
		break;
	}
}

void Book1::userCreateObj() {
	setName();
	setYear();
	setAuthor();
	setPages();
	setDescr();
}
