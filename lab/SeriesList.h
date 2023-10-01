#pragma once
#include "Node.h"
#include "Book1.h"
#include "Character1.h"


class SeriesList :
    public Node
{
public:
    string Name;
    list<string> BookCollect;
    SeriesList* Next;

    
    SeriesList* head = NULL; SeriesList* tail = NULL;
    
    //Book1 book,BookList **head, BookList ** tail
    void AddSeries(string name, SeriesList** head, SeriesList** tail);


};
   

