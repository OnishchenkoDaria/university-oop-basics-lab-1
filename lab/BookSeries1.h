#pragma once
#include "Basic.h"
#include "Node.h"
#include "BookList.h"
#include "Book1.h"
#include "Character1.h"

class BookSeries1 :
    public Basic
{
private:
    string Name;
    int Year;
    BookList* Books;
public: 

    BookSeries1(string name, int num, BookList*head = NULL){
        Name = name;
        YearOrAge = num;
        Books = head;
    }

    BookSeries1* Head = NULL, * Tail = NULL;

    void AddSeries(BookSeries1** Head, BookSeries1** Tail);

    void getInfo();
};

