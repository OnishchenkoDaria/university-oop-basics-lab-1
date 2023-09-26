#include <iostream>
#include <list>
#include "Basic.h"
#include "Book1.h"
#include "Character.h"
#include "BookSeries.h"


using namespace std;

int main()
{
	Book1 Sherlock("Sherlock", 1981 ,"Arthur Conan Doyle", 320, 
		"The collection of stories also addresses the supremacy of logic and reason to explain unusual or mysterious circumstances.");
	Sherlock.getInfo();
	
}
  