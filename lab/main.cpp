#include <iostream>
#include <list>
#include "Basic.h"
#include "Book1.h"
#include "Character.h"
#include "BookSeries.h"
#include "Node.h"
#include "BookList.h"
#include "CharacterList.h"
#include "SeriesList.h"
#include "Database.h"
#include "Algorythm.h"

using namespace std;

BookList* InsertionSort(BookList* head) {
	BookList* start = new BookList();
	start->Next = head;
	BookList* current = head, * prev = start;
	while (current) {
		if (current->Next and (current->Next->Book.returnYear() < current->Book.returnYear())) {
			while (prev->Next and (prev->Next->Book.returnYear() < current->Book.returnYear())) {
				prev = prev->Next;
			}
			BookList* temp = prev->Next;
			prev->Next = current->Next;
			current->Next = current->Next->Next;
			prev->Next->Next = temp;
			prev = start;

		}
		else
			current = current->Next;
	}
	return start->Next;
}

Book1 createVar() {
	Book1 book;
	book.userCreateObj();
	return book;
}

Book1 searchItem(BookList bookList, BookList* head, bool* index) {
	string name;
	cout << ">Insert Name: ";
	cin >> name;
	return bookList.Search(head, name, index);
}

int main()
{	
	BookList bookList(nullptr);
	BookList* head = NULL, * tail = NULL;
	
	char userInput; 
	int* counter = 0;
	bool index;
	Book1 service;
	int id;
	BookList* InsertionSortList();

	while (true) {
		cout << "Choose an option: " << endl;
		cout << "	>press <A> to Add an item" << endl;
		cout << "	>press <S> to Search an item" << endl;
		cout << "	>press <D> to delete an item" << endl;
		cout << "	>press <P> to print a list" << endl;
		cout << "	>press <E> to edit an item" << endl;
		cout << "	>press <M> to sort a list" << endl;
		cin >> userInput;
		switch (userInput) {
		case 'A':
			bookList.AddItem(createVar(), &head, &tail);
			break;
		case 'P':
			bookList.Show(head);
			break;
		case 'S':
			index = false;
			service = searchItem(bookList, head, &index);
			if (index == true)
				service.getInfo();
			else
				cout << "Such an Item does not exist. ypu can add it by pressing 'A'" << endl;
			break;
		case 'D':
			id = searchItem(bookList, head, &index).returnId();
			cout << id;
			bookList.DeleteSelected(&head, id);
			bookList.FixingId(&head);
			break;
		case 'E':
			bookList.FindAndEdit(&head);
			break;
		case 'M':
			InsertionSort(head);
			break;
		}
	}
}
 