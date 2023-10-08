#pragma once
#include "BookList.h"
#include "Character1.h"

class BookSeries10
{
public:
	BookList List;
	BookList* head = NULL, * tail = NULL;
	BookSeries10* Next;

	BookSeries10* Head = NULL, * Tail= NULL;
	
	void CheckSeries(Book1 book);
};

