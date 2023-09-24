#include <iostream>
#include <list>
#include <string>
#pragma once
using namespace std;

class BookSeries
{
private:
	string Name;
	int Year;
	list<string>Books;
	list<string>Authors;
public:
	BookSeries(string name, int year) {
		Name = name;
		Year = year;
	}
	void getInfo();
	void BookSelect();
};

