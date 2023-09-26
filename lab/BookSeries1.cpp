#include "BookSeries1.h"

void BookSeries1::getInfo()
{

	Basic::getInfo();

	cout << "Book count: " << BookCount << endl;
	for (string books : Books)
		cout << "Books: " << books << " ";
}

