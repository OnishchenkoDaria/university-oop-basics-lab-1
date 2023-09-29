#pragma once
#include "Basic.h"
class Book1 :
    public Basic
{
private:
    //string Name;
   // int Year;
    string Author;
    int Pages{};
    string Annotation;
public:
    
    void getInfo();

    void getName();

    void userCreateObj();

    string returnName();

    int returnId();

    void setId(int num);

    void setName();
    void setYear();
    void setAuthor();
    void setPages();
    void setDescr();

    void EditItem();
};

