#pragma once
#include "BookList.h"
#include "Author.h"
class AuthorList :
    public BookList
{
private:
    Author author;
    AuthorList* Next;

public:

    AuthorList(AuthorList* next = nullptr) {
        Next = next;
    }
   
};

