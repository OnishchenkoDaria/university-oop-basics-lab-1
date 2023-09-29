#pragma once
#include "BookList.h"
class Algorythm :
    public BookList
{
public:/*
    BookList* InsertionSortList(BookList* head) {
        BookList* start = new BookList();
        start->Next = head;
        BookList* current = head, *prev = start;
        while (current) {
            if (current->Next and (current->Next->Book.returnYear() < current->Book.returnYear())) {
                while (prev->Next and (prev->Next->Book.returnYear() < current->Book.returnYear())) {
                    prev = prev->Next;
                }
                 BookList* temp = prev->Next;
                 prev->Next = current->Next;
                 current->Next = current->Next->Next;
                 prev->Next->Next = temp;
                 prev = start;
                
            }
            else
                current = current->Next;
        }
        return start->Next;
    }*/
};

