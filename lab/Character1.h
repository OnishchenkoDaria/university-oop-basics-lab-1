#pragma once
#include "Book1.h"
#include "BookList.h"
#include "SeriesList.h"
#include <vector>
#include <list>

class Character1 :
	public Book1
{
private:
	int Id;
	int Age{};
	list<string> Names;
	BookList* Books;
	
	Character1(int id, int age, BookList *head = NULL) {
		Id = id;
		Age = age;
		Books = head;
	}

public:

	int returnId();

	void setId(int num);

	void userCreateObj();

	void setNameList();

	void setStatusList();

	Book1 returnBook();

};

