#include "BookSeries10.h"

void BookSeries10::CheckSeries(Book1 book) {
	while (Head) {
		if (!head) {
			BookList* head = NULL, * tail = NULL;
			List.AddItem(book, &head, &tail);
			return;
		}
		else {
			if (List.BoolFind(head, book) == true) {
				List.AddItem(book, &head, &tail);
				List.InsertionSort(&head);
				return;
			}
			else {
				BookSeries10* temp = new BookSeries10;
				temp = Tail->Next;
				temp->List.AddItem(book, &head, &tail);
				List.InsertionSort(&head);
				Tail = temp;
			}

		}
		Head = Head->Next;
	}
}