#pragma once
#include "Book1.h"
#include "BookList.h"
#include <vector>
#include <list>
#include "BookSeries10.h"

struct status{

	Book1 Book;
	string matter;
	status* Next;	
};

class BookSeries10;

class Character1 :
	public Book1
{
private:
	int Id;
	int Age{};
	list<string> Names;
	//status 
	//Character1* Next;
	

public:

	//тут підуть нові функції:
	void create(string name, int age, string CHmatter, BookSeries10* Head);
	
	void AddBook(status* head, string CHmatter, BookSeries10* Head);

	void Check(status** head, BookSeries10* Head);
    //закінчилось

	int returnId();

	void setId(int num);

	void userCreateObj();

	void setNameList();
};

