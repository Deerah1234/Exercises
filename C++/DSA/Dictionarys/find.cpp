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

	/* NOTE - If the key not in dictionary. It returns map::end()
			- Syntax: find(key);
	*/

	auto it = books.find("Solaria");
	cout << it->first << ' ' << it->second << endl;
}