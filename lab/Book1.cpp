#include "Book1.h"

void Book1:: getInfo()
{
	//динамічний поліморфізм 
	Basic::getInfo();

	cout << "Author: " << Author << endl
		<< "Number of Pages: " << Pages << endl
		<< "Annotation: " << Annotation << endl;
}

void Book1::getName(){
	Basic::getName();
}

string Book1::returnName() {
	return Name;
}

int Book1::returnId() {
	return Id;
}

void Book1::setId(int num) {
	this->Id = num;
}

void Book1::setName() {
	string name;
	cout << "	Insert the Name: " << endl;
	cin >> name;
	this->Name = name;
}
void Book1::setYear() {
	int year;
	cout << "	Insert the Year: " << endl;
	cin >> year;
	this->YearOrAge = year;
}
void Book1::setAuthor() {
	string author;
	cout << "	Insert the Author: " << endl;
	cin >> author;
	this->Author = author;
}
void Book1::setPages() {
	int pages;
	cout << "	Insert the Number of Pages: " << endl;
	cin >> pages;
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
