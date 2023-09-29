#pragma once
#include "Book1.h"
#include <vector>

class Node abstract
{
public:
	//Basic Item;
	Node* Next;
	Node* Prev;

	Node(Node* next = nullptr, Node* prev = nullptr) :
		Next{ next }, Prev{ prev } {};


};
//функції описані тут застос. для BookList,CharacterList,SeriesList за допомогою поліморфізму
// Node* bookList = &BookList 
