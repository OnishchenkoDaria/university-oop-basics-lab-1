#include <iostream>
#include <list>
#include "Book.h"
#include "Character.h"
#include "BookSeries.h"
using namespace std;

int main()
{
	Book Sherlock("Sherlock","Arthur Conan Doyle", 1981, 320, 
		"The collection of stories also addresses the supremacy of logic and reason to explain unusual or mysterious circumstances.");
	Sherlock.getInfo();
	Character Holmes(30);
	Holmes.addNames("Holmes");
	Holmes.addNames("Sherlock");
	Holmes.getInform();

	//використавши поліморфізм стоврити загальу функцію гет інфо

}
  