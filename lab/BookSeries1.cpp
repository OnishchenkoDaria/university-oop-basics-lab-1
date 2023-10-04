#include "BookSeries1.h"

void BookSeries1::getInfo()
{

	Basic::getInfo();

	//cout << "Book count: " << BookCount << endl;
	//for (string books : Books)
	//	cout << "Books: " << books << " ";
}

void BookSeries1::AddSeries(BookSeries1** Head, BookSeries1** Tail) {
	if (!*Head) {
		string name; cin >> name;
		(*Head)->Name = name;
		int year; cin >> year;
		(*Head)->Year = year;
		
	}
		
}