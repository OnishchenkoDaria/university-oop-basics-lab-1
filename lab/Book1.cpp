#include "Book1.h"

void Book1:: getInfo()
{
	//��������� ���������� 
	Basic::getInfo();

	cout << "Author: " << Author << endl
		<< "Number of Pages: " << Pages << endl
		<< "Annotation: " << Annotation << endl;
}

	
