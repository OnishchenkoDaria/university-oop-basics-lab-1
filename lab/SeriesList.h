#pragma once
#include "Node.h"
#include "BookSeries1.h"
#include "Book1.h"
#include "Character1.h"


class SeriesList :
    public Node
{
public:
    //BookSeries1 Series;
    BookList* BookCollect;
    SeriesList* Next;

    
    SeriesList* head = NULL; SeriesList* tail = NULL;
    
    //Book1 book,BookList **head, BookList ** tail
    void AddSeries(SeriesList** head, SeriesList** tail);


};
   

