#pragma once
#include "Node.h"
#include "Characters1.h"
class CharacterList :
    public Node
{
    Characters1 Character;
    CharacterList* Next, * Prev;

public:
    CharacterList(Characters1 character, CharacterList* next = nullptr, CharacterList* prev = nullptr) :
        Character{ character }, Next{ next }, Prev{ prev } {};

    CharacterList* head = NULL;
    CharacterList* tail = NULL;


};

