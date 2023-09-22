#include <iostream>
#include <list>
using namespace std;

class book {
public: 
	string Name;
	string Author;
	int NumberOfPages{};
	list<string> Genres;

	//the piece of code below is constructor
	book(string name, string author) {
		Name = name;
		Author = author;
		NumberOfPages = 0;
	}
	// "getter" method of the class
	void GetInfo() {
		cout << "Tittle: " << Name << endl;
		cout << "Author: " << Author << endl;
		cout << "Pages: " << NumberOfPages << endl;
		for (string genres : Genres) {
		cout << genres << endl;
		}	
	}
};

int main()
{
   // Selected the 2nd task from list 1 and the 10th task from list 2
	//usage of the constructor
	book SherlockSeries("The Adventures of Sherlock Holmes", "Arthur Conan Doyle");
	SherlockSeries.Genres.push_back("Detective");

	SherlockSeries.GetInfo();

	//showing practise - loop method to output the list in class
	

	

	/*SherlockSeries.Author = "Arthur Conan Doyle";
	SherlockSeries.Name = "The Adventures of Sherlock Holmes";
	SherlockSeries.NumberOfPages = 320;
	SherlockSeries.Genres = {"Detective" , "Historical novel" , "Classic"};*/
}
