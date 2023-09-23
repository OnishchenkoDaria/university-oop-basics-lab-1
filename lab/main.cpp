#include <iostream>
#include <list>
#include "Book.h"
using namespace std;

int main()
{
	Book Sherlock("Sherlock","Arthur Conan Doyle", 1981, 320, 
		"The collection of stories also addresses the supremacy of logic and reason to explain unusual or mysterious circumstances.");
	Sherlock.getInfo();

}
