#include <iostream>
#include <map>

using namespace std;

int main()
{
	string name = "charlie";
	map<string, int> books;

	books["Solaria"] = 1998;
	books["Velsim"] = 1942;
	books["Good Tree"] = 2005;
	books["Last Sword"] = 1879;
	books["Space Travel"] = 2017;

	// This will insert the computer as key and 1932 as the value
	// books.insert({"Computer", 1932});

	/* NOTE -  That the insertiong also returns a pair of:
				pair<map<string, int>::iterator,bool>
			- Syntax: map.insert({key, value});
	*/
	// books.insert({name, 0});
	// map<string, int>::iterator it;
	// for (it = books.begin(); it != books.end(); it++)
	// {
	// 	cout << "Name: " << it->first << "\tValue: " << it->second << endl;
	// }

	// NOTE - If the key exist bool = (0) and the insertion was not made, else bool = (1).
	// NOTE - with the insert method you cannot update the value of key that already exist.
	auto p = books.insert({"Computer", 1932});
	cout << "Name: " << p.first->first << endl;
	cout << "Year: " << p.first->second << endl;
	cout << "Boolean: " << p.second << endl;
}