#include "Book1.h"

void Book1:: getInfo()
{
	//динамічний поліморфізм 
	Basic::getInfo();

	cout << "Author: " << Author << endl
		<< "Number of Pages: " << Pages << endl
		<< "Annotation: " << Annotation << endl;
}

	
