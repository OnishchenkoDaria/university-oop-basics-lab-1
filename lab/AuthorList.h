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

   // void userCreateObj();

   /* void setName();

    void setYear();
    void AddItem(Book1 book, BookList** head, BookList** tail);
    
    void Show(BookList* head);

    //void ShowHead(BookList* head);

    void DeleteSelected(BookList** head, int position);

    Book1 Search(BookList* head, string name, bool* index);

    void FindAndEdit(BookList** head);

    void FixingId(BookList** head);*/
};

