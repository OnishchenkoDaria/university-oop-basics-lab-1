#pragma once
#include "Basic.h"
class BookSeries1 :
    public Basic
{
private:
    int BookCount;
    list<string> Books;
public: 

    BookSeries1(string name, int num, int count) : Basic(name, num) {
        BookCount = count;
    }
    void getInfo();
};

