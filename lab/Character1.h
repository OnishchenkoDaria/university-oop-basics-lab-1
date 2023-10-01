#pragma once
#include "Book1.h"
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
	list<string> Books;
	

public:

	int returnId();

	void setId(int num);

	void userCreateObj();

	void setNameList();

	void setStatusList();

	Book1 returnBook();

};

