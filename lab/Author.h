#pragma once
#include "Book1.h"
class Author :
    public Book1
{
private:
    string Name;
    int Age{};
public:
    void userCreateObj();
};

