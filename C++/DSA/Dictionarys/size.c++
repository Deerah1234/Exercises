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

	/* NOTE - size(): returns the size of the dictionary */
	cout << "We have a total number of: " << books.size() << " books in the library." << endl;
}