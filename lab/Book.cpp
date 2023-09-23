#include "Book.h"

void Book::getInfo() {
	cout << "Tittle: " << Name << endl;
	cout << "Author: " << Author << endl;
	cout << "Year of Publishing: " << PublishYear << endl;
	cout << "Pages: " << NumberOfPages << endl;
	for (string genres : Genres) {
		cout << genres << endl;
	}
	cout << "Description: " << Description;
}