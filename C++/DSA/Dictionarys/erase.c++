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

	// n return the amount of value be passed to the erase method
	/*
		int n = books.erase("Solaria");
		cout << "Value of N: " << n << endl;
	*/
	// NOTE - Syntax: erase(key, [optional]);
	// delete all elements
	auto it = books.begin();
	books.erase(it, books.end());
}