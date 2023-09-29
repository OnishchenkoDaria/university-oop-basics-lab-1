#pragma once
#include "Basic.h"
class BookSeries1 :
    public Basic
{
private:
   // string Name;
    //int Year;
    int BookCount;
    list<string> Books;
public: 

    BookSeries1(string name, int num, int count){
        Name = name;
        YearOrAge = num;
        BookCount = count;
    }
    void getInfo();
};

