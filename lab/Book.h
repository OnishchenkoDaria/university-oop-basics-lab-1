#include <iostream>
#include <list>
#include <string>
#pragma once
using namespace std;

class Book
{
private:
	string Name;
	string Author;
	int PublishYear;
	int NumberOfPages{};
	list<string> Genres;
	string Description;

public:
	//constructor
	Book(string name, string author, int year, int pages, string description) {
		Name = name;
		Author = author;
		PublishYear = year;
		NumberOfPages = pages;
		Description = description;
	}
	
	void getInfo();
};

