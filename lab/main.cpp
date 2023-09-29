#include <iostream>
#include <list>
#include "Basic.h"
#include "Book1.h"
#include "Node.h"
#include "BookList.h"
#include "CharacterList.h"
#include "SeriesList.h"
#include "Algorythm.h"

using namespace std;

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
	BookList bookList(nullptr), authorList(nullptr);
	BookList* head = NULL, * tail = NULL;
	BookList* head1 = NULL, * tail1 = NULL;
	char userInput, decision; 
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
			cin >> decision;
			switch (decision) {
			case'b':
				bookList.AddItem(createVar(), &head, &tail);
				break;
			case'a':
				authorList.AddItem(createVar(), &head1, &tail1);
				break;
			}
			break;
		case 'P':
			cin >> decision;
			switch (decision) {
			case'b':
				bookList.Show(head);
				break;
			case'a':
				authorList.Show(head1);
				break;
			}
			break;
		case 'S':
			cin >> decision;
			switch (decision) {
			case'b':
				index = false;
				service = searchItem(bookList, head, &index);
				if (index == true)
					service.getInfo();
				else
					cout << "Such an Item does not exist. ypu can add it by pressing 'A'" << endl;
				break;
			case'a':
				index = false;
				service = searchItem(authorList, head1, &index);
				if (index == true)
					service.getInfo();
				else
					cout << "Such an Item does not exist. ypu can add it by pressing 'A'" << endl;
				break;
			}
			break;
			
		case 'D':
			cin >> decision;
			switch (decision) {
			case'b':
				bookList.DeleteSelected(&head, searchItem(bookList, head, &index).returnId());
				bookList.FixingId(&head);
				break;
			case'a':
				authorList.DeleteSelected(&head1, searchItem(authorList, head1, &index).returnId());
				break;
			}			
			break;
		case 'E':
			cin >> decision;
			switch (decision) {
			case'b':
				bookList.FindAndEdit(&head);
				break;
			case'a':
				authorList.FindAndEdit(&head1);
				break;
			}
			break;
		case 'M':
			cin >> decision;
			switch (decision) {
			case'b':
				//
				break;
			case'a':
				//
				break;
			}
			break;
		}
	}
}
 