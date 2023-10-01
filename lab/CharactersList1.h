#pragma once
#include "BookList.h"
#include "Character1.h"
class CharactersList1 :
    public BookList
{
private:
    Character1 hero;
    CharactersList1* Next;

public:

    CharactersList1(CharactersList1* next = nullptr) {
        Next = next;
    }
    
    void AddCharacter(Character1 person, CharactersList1** head, CharactersList1** tail);
};



