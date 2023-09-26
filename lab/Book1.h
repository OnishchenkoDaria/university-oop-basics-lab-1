#pragma once
#include "Basic.h"
class Book1 :
    public Basic
{
private:
    string Author;
    int Pages;
    string Annotation;
public:
    Book1(string name, int num, string author, int pages, string descr) : Basic(name, num) {
        Author = author;
        Pages = pages;
        Annotation = descr;
    }
    void getInfo();
};

