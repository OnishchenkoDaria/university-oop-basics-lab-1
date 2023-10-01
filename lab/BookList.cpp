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

void BookList::InsertionSort(BookList** head) {
	if (*head == NULL or (*head)->Next == NULL)
		return;
	
	BookList* temp = (*head)->Next;
	//*head->Next->Book.getName();
	BookList* prev = *head;

	while (temp) {
		
		prev->Book.getName(); cout << " "; temp->Book.getName(); cout << endl;
		if (prev->Book.returnYear() <= temp->Book.returnYear()) {
			cout << "if 1" << endl;
			prev = temp;
			temp = temp->Next;
		}
		else {
			cout << "if 2";
			prev->Book.getName(); cout << " "; temp->Book.getName(); cout << endl;
						
			if (temp->Book.returnYear() <= (*head)->Book.returnYear()) {
				prev->Next = temp->Next;
				temp->Next = *head;
				*head = temp;
			}
			else {
				BookList* serv = *head;
				while (temp->Book.returnYear() >= serv->Book.returnYear())
				{
					cout << "cycle";
					serv = serv->Next;
				}
				prev->Next = temp->Next;
				temp->Next = serv->Next;
				serv->Next = temp;
			}
			temp = prev->Next;
			//temp->Book.getName();
		}
	}
}

void BookList::FindHalf(BookList* head, BookList** Part1, BookList** Part2) {
	BookList* slow = head;
	BookList* fast = head->Next;

	while (fast != NULL)
	{
		fast = fast->Next;
		if (fast != NULL)
		{
			slow = slow->Next;
			fast = fast->Next;
		}
	}
	
	*Part1 = head;
	*Part2 = slow->Next;
	slow->Next = NULL;
}

BookList* BookList::SortedResult(BookList* Part1, BookList* Part2) {
	BookList* Result = NULL;

	if (Part1 == NULL) {
		return(Part2);
	}
	else if (Part2 == NULL) {
		return(Part1);
	}

	if (Part1->Book.returnYear() <= Part2->Book.returnYear()) {
		Result = Part1;
		Result->Next = SortedResult(Part1->Next, Part2);
	}
	else {
		Result = Part2;
		Result->Next = SortedResult(Part1, Part2->Next);
	}
	return Result;
}

void BookList::MergeSort(BookList** head) {
	BookList* Mhead = *head;
	BookList* Part1;
	BookList* Part2;
	//cout << "hi";
	if (Mhead==NULL or (Mhead->Next == NULL)) {
		return;
	}
	
	FindHalf(Mhead, &Part1, &Part2);
	
	//cout << endl; Part1->Book.getName();
	//cout << endl; Part2->Book.getName();

	MergeSort(&Part1);
	MergeSort(&Part2);

	*head = SortedResult(Part1, Part2);
}

BookList* BookList::devide(BookList* head, BookList* tail) {
	BookList* pivot = head;
	BookList* curr = head->Next, *prev = head;

	while (curr != tail->Next) {
		if (pivot->Book.returnYear() > curr->Book.returnYear()) {
			
			//swap(prev->Next->Book.returnYear(), curr->Book.returnYear());
			/*BookList* temp = new BookList;
			temp->Book.setBookYear(prev->Next->Book.returnYear());
			prev->Book.setBookYear(curr->Book.returnYear()); 
			curr->Book.setBookYear(temp->Book.returnYear());
			free(temp);*/
			Swap(prev->Next, curr);
			prev = prev->Next;
		}
		curr = curr->Next;
	}
	//swap(prev->Book.returnYear(), pivot->Book.returnYear());
	/*BookList* temp = new BookList;
	temp->Book.setBookYear(prev->Book.returnYear());
	prev->Book.setBookYear(pivot->Book.returnYear());
	pivot->Book.setBookYear(temp->Book.returnYear());
	free(temp);*/
	Swap(prev,pivot);
	
	return prev;
}

void BookList::Swap(BookList* prev, BookList* curr) {
	// Swap BookList nodes
	BookList* temp = new BookList;
	temp->Book = prev->Book;
	prev->Book = curr->Book;
	curr->Book = temp->Book;
	delete temp;

}

void BookList::solveSort(BookList**Realhead, BookList** Realtail)
{
	BookList* head = *Realhead;
	BookList* tail = *Realtail;

	if (head == NULL || head == tail || tail == NULL || head->Next == tail) {
		return;
	}

	BookList* pivot = devide(head, tail);

	// Update the head and tail pointers for the left and right partitions
	*Realhead = head;
	*Realtail = tail;

	solveSort(Realhead, &pivot); // Sort the left partition
	solveSort(&pivot->Next, Realtail); // Sort the right partition
	/*
	if (head == NULL || head == tail || tail == NULL || head->Next == tail) {
		return;
	}

	BookList* pivot = devide(head, tail);
	//cout << "pivot: ";  pivot->Book.getName();cout << endl;
	solveSort(head, pivot);
	solveSort(pivot->Next, tail);*/
}

/*
void BookList::CountingSort(BookList** head) {
	if (*head == NULL or (*head)->Next == NULL)
		return;
	BookList* temp = *head;
	int maxNum = temp->Book.returnYear();
	int minNum = temp->Book.returnYear();
		
	while (temp) {
		if (maxNum < temp->Book.returnYear())
			maxNum = temp->Book.returnYear();
		
		if (minNum > temp->Book.returnYear())
			minNum = temp->Book.returnYear();
		
		temp = temp->Next;
	}
	int range = maxNum - minNum + 1;
	int* countArray = new int[range] {0};

	//base array
	temp = *head;
	while (temp) {
		countArray[temp->Book.returnYear()]++;
		temp = temp->Next;
	}
	
	for (int i = 1; i <= range; i++){
		countArray[i] =+ countArray[i - 1];
	}
	BookList* sortedList = NULL;
	temp = *head;

	while (temp) {
		BookList* newTemp = new BookList;
		newTemp->Book = temp->Book;
		int index = temp->Book.returnYear() - minNum;
		if (countArray[index] > 0) {
			newTemp->Next = sortedList;
			sortedList = newTemp;
			countArray[index]--;
		}
		temp = temp->Next;
	}
	*head = sortedList;
	delete[] countArray;

}*/
/*
void BookList::CountingSort(BookList* head) {
	if (head == nullptr || head->Next == nullptr) {
		return; // Nothing to sort for an empty list or a list with one element
	}

	// Find the range of publication years
	int minYear = head->Book.returnYear();
	int maxYear = head->Book.returnYear();
	BookList* current = head;

	while (current) {
		int year = current->Book.returnYear();
		minYear = std::min(minYear, year);
		maxYear = std::max(maxYear, year);
		current = current->Next;
	}

	int range = maxYear - minYear + 1;

	// Create an array to count occurrences of each year
	int* countArray = new int[range] {0};

	// Traverse the list and count occurrences of each year
	current = head;
	while (current) {
		int year = current->Book.returnYear();
		countArray[year - minYear]++;
		current = current->Next;
	}

	// Reconstruct the sorted list using the count array
	BookList* sortedList = nullptr;

	for (int i = range - 1; i >= 0; i--) {
		while (countArray[i] > 0) {
			BookList* newNode = new BookList();
			newNode->Book.setBookYear(i + minYear);
			newNode->Next = sortedList;
			sortedList = newNode;
			countArray[i]--;
		}
	}

	// Update the caller's head pointer
	head = sortedList;

	delete[] countArray;
}

BookList* BookList::FindMin(BookList* head) {
	BookList* minValue = head;
	
}*/

int BookList::findMin(BookList* head) {
	if (!head)
		return NULL;
	BookList* curr = head;
	int min = curr->Book.returnYear();
	while (curr) {
		if (min > curr->Book.returnYear())
			min = curr->Book.returnYear();
		curr = curr->Next;
	}
	return min;
}

int BookList::findMax(BookList* head) {
	if (!head)
		return NULL;
	BookList* curr = head;
	int max = curr->Book.returnYear();
	while (curr) {
		if (max < curr->Book.returnYear())
			max = curr->Book.returnYear();
		curr = curr->Next;
	}
	return max;
}


BookList* BookList::CountingSort(BookList* head) {
	if (!head or !head->Next) 
		return head;
	
	int minYear = findMin(head);
	int maxYear = findMax(head);

	int range = maxYear - minYear + 1;
	vector<int> countArray(range, 0);

	BookList* curr = head;
	while (curr) {
		countArray[curr->Book.returnYear() - minYear]++;
		curr = curr->Next;
	}

	curr = head;
	int i = 0;
	while (curr) {
		if (countArray[i] == 0)
			i++;
		else {
			curr->Book.setBookYear(minYear + i);
			countArray[i]--;
			curr = curr->Next;
		}
	}

	return head; /*// Return the sorted list

	BookList* min = new BookList(); min->Book.setBookYear(findMin(head));
	BookList* max = new BookList(); max->Book.setBookYear(findMin(head));

	int range = max->Book.returnYear() - min->Book.returnYear() + 1;
	// Create a counting array to store the count of each value
	vector<int> countArray(range, 0);

	BookList* curr = head;
	while (curr) {
		countArray[curr->Book.returnYear() - min->Book.returnYear()]++;
		curr = curr->Next;
	}

	curr = head;
	int i = 0;
	while (curr) {
		if (countArray[i] == 0)
			i++;
		else {
			curr->Book.setBookYear(min->Book.returnYear() + i);
			countArray[i]--;
			curr = curr->Next;
		}
	}
	delete min;
	delete max;

	return head;*/
}

int BookList::FindLength(BookList* head) {
	int num = 0;
	BookList* temp = head;
	while (temp) {
		temp = temp->Next;
		num++;
	}
	return num;
}

BookList* BookList::BubbleSort(BookList*head) {
	BookList* end, * r, * p, * q, * temp;
	for (end = NULL; end != head->Next; end = p) {
		for (r = p = head; p->Next != end; r = p, p = p->Next) {
			q = p->Next;
			if (p->Book.returnYear() > q->Book.returnYear()) {
				p->Next = q->Next;
				q->Next = p;
				if (p != head)
					r->Next = q;
				else
					head = q;
				temp = p;
				p = q;
				q = temp;
			}
		}

	}
	return head;
}
