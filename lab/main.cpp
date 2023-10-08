#include <iostream>
#include <list>
#include "Basic.h"
#include "Book1.h"
#include "Node.h"
#include "BookList.h"
#include "SeriesList.h"
#include "Algorythm.h"
#include "AuthorList.h"

using namespace std;

Book1 createVarB() {
	Book1 book;
	book.userCreateObj();
	return book;
}

Author createVarA() {
	Author author;
	author.userCreateObj();
	return author;
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
	AuthorList authorList(nullptr);
	BookList* head = NULL, * tail = NULL;
	BookList* head1 = NULL, * tail1 = NULL;
	char decision; 
	//int* counter = 0;
	bool index;
	Book1 service;
	//BookList* InsertionSortList();


	while (true) {
		cout << "Choose an option: " << endl;
		cout << "	>press <A> to Add an item" << endl;
		cout << "	>press <F> to Find an item" << endl;
		cout << "	>press <D> to delete an item" << endl;
		cout << "	>press <P> to print a list" << endl;
		cout << "	>press <E> to edit an item" << endl;
		cout << "	>press <S> to sort a list" << endl;
		cin >> decision;
		switch (decision) {
		case 'A':
			cout << "	>press <b> to work with Book List" << endl;
			cout << "	>press <a> to work with Book List" << endl;
			cin >> decision;
			switch (decision) {
			case'b':
				bookList.AddItem(createVarB(), &head, &tail);
				break;
			case'a':
				authorList.AddItem(createVarA(), &head1, &tail1);
				break;
			}
			break;
		case 'P':
			cout << "	>press <b> to work with Book List" << endl;
			cout << "	>press <a> to work with Book List" << endl;
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
		case 'F':
			cout << "	>press <b> to work with Book List" << endl;
			cout << "	>press <a> to work with Book List" << endl;
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
			cout << "	>press <b> to work with Book List" << endl;
			cout << "	>press <a> to work with Book List" << endl;
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
			cout << "	>press <b> to work with Book List" << endl;
			cout << "	>press <a> to work with Book List" << endl;
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
		case 'S':
			cout << "	>press <b> to work with Book List" << endl;
			cout << "	>press <a> to work with Book List" << endl;
			cin >> decision;
			switch (decision) {
			case'b':
				cout << "		>press <I> to use Insert Sort" << endl;
				cout << "		>press <M> to use Merge Sort" << endl;
				cout << "		>press <Q> to use Quick Sort" << endl;
				cout << "		>press <C> to use Counting Sort" << endl;
				cout << "		>press <B> to use Bubble Sort" << endl;
				cin >> decision;
				switch (decision) {
				case'I':
					bookList.InsertionSort(&head);
					bookList.FixingId(&head);
					break;
				case'M':
					bookList.MergeSort(&head);
					bookList.FixingId(&head);
					break;
				case'Q':
					bookList.solveSort(&head, &tail);
					bookList.FixingId(&head);
					break;
				case'B':
					bookList.BubbleSort(head);
					bookList.FixingId(&head);
					break;
				case'C':
					bookList.CountingSort(&head);
					bookList.FixingId(&head);
					break;
				}
				break;
			case'a':
				cout << "		>press <I> to use Insert Sort" << endl;
				cout << "		>press <M> to use Merge Sort" << endl;
				cout << "		>press <Q> to use Quick Sort" << endl;
				cout << "		>press <C> to use Counting Sort" << endl;
				cout << "		>press <B> to use Bubble Sort" << endl;
				cin >> decision;
				switch (decision) {
				case'I':
					authorList.InsertionSort(&head1);
					authorList.FixingId(&head1);
					break;
				case'M':
					authorList.MergeSort(&head1);
					authorList.FixingId(&head1);
					break;
				case'Q':
					authorList.solveSort(&head1, &tail1);
					authorList.FixingId(&head1);
					break;
				case'B':
					authorList.BubbleSort(head1);
					authorList.FixingId(&head1);
					break;
				case'C':

					authorList.CountingSort(&head1);
					authorList.FixingId(&head1);
					break;
				}
				break;
			}
		}
	}
}
 