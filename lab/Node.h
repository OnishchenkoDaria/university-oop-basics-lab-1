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
//������� ������ ��� ������. ��� BookList,CharacterList,SeriesList �� ��������� �����������
// Node* bookList = &BookList 
