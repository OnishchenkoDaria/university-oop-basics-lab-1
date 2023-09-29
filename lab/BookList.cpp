#include "BookList.h"

void BookList::AddItem(Book1 book, BookList** head, BookList **tail) {
	BookList* temp = new BookList;
	temp->Book = book;
	
	if (!(*head)) {
		//temp->Next /*= temp->Prev*/ = temp;
		*head = *tail = temp;
		temp->Book.setId(1);
	}
	else {
		(*tail)->Next = temp;
		//(temp)->Id = (*tail)->Id + 1;
		temp->Book.setId((*tail)->Book.returnId() + 1);
		*tail = temp;
	}
	temp->Next = NULL;
}

void BookList::ShowHead(BookList* head) {
	head->Book.getName();
}


void BookList::Show(BookList* head) {
	//BookList* temp = head;
	if (!head)
	{
		cout << "List does not exist." << endl;
	}

	while (head) {
		cout << head->Book.returnId()<<". ";
		head->Book.getName();
		head = head->Next;
	}
	cout << endl;
}


//протидія попередженню C4715
__declspec(noreturn) extern void fatal() {}

Book1 BookList::Search(BookList* head, string name, bool *index) {
	
	//cout << name << endl;
	//head->Book.getName();
	while (head) {
		if (name == head->Book.returnName()) {
			//cout << "1 jksdfks" << endl;
			
			*index = true;
			return head->Book;
		}
			
		else {
			//cout << "2 sfhsdkfs"<<endl;
			head = head->Next;
			
		}
	}
	cout << "List does not exist" << endl;
	fatal();
}

void BookList::DeleteSelected(BookList** head, int position) {
	//функція пошуку
	BookList* temp, * prev;
	temp = *head;
	prev = *head;

	for (int i = 0; i < position; i++) {
		if (i == 0 and position == 1) {
			*head = (*head)->Next;
			free(temp);
		}
		else {
			if (i == position - 1 and temp) {
				prev->Next = temp->Next;
				free(temp);
			}
			else {
				prev = temp;

				if(prev == NULL)
					break;
				temp = temp->Next;
			}
		}
	}
}

void BookList::FixingId(BookList**head){
	BookList* temp, * prev;
	temp = *head;
	prev = *head;
	while (temp) {
		if ((*head)->Book.returnId() != 1) {
			while (temp) {
				temp->Book.setId(temp->Book.returnId() - 1);
				temp = temp->Next;
			}
		}
		else {
			prev = temp;
			if (prev == NULL)
				break;
			temp = temp->Next;
			while (temp) {
				if (temp->Book.returnId() - prev->Book.returnId() != 1) {
					temp->Book.setId(temp->Book.returnId() - 1);
					prev = temp;
					if (prev == NULL)
						break;
					temp = temp->Next;
				}
			}
		}
	}
}

void BookList::FindAndEdit(BookList** head) {
	string name;
	BookList* temp = *head;

	cout << ">Insert Name: ";	cin >> name;
	while(temp) {
		if (temp->Book.returnName() == name) {
			temp->Book.EditItem();
		}
		else
			temp = temp->Next;
	}
}