#include "Character1.h"


void Character1::userCreateObj() {
	setYear();
}

void Character1::setNameList() {
	string name;
	cout << "Insert the Name: " << endl;
	cin >> name;
	Names.push_back(name);
}

int Character1::returnId() {
	return Id;
}

void Character1::setId(int num) {
	this->Id = num;
}

void Character1::create(string name, int age, string CHmatter, BookSeries10* Head) {
	Names.push_back(name);
	Age = age;
	status* head = NULL, * tail = NULL;
	AddBook(head, CHmatter, Head);
	//Check(char, head);
}

void Character1::AddBook(status* head, string CHmatter, BookSeries10* Head) {
	status* temp = new status;
	head->Next = temp;
	head->Book.userCreateObj();
	temp->matter = CHmatter;
	Check(&head, Head);
}

void Character1::Check(status** head, BookSeries10* Head) {
	status* temp = *head;
	while (temp) {
		(*Head).CheckSeries(temp->Book);
		(*head)->Next;
	}
	//Head->Next;
}
