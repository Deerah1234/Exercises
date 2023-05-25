#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> books;

	books["Solaria"] = 1998;
	books["Velsim"] = 1942;
	books["Good Tree"] = 2005;
	books["Last Sword"] = 1879;
	books["Space Travel"] = 2017;

	/* NOTE - if the dictionary is empty it will return (1) which is true.
			else it will return (0) which is false at that time the dictionary is not empty
	*/
	if (books.empty())
	{
		cout << "The dictionary is empty" << endl;
	}
	else
	{
		cout << "The dictionary is not empty" << endl;
	}
}