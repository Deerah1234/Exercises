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

	// Using empty() method
	/* if (books.empty())
	{
		cout << "Empty Dictionary.";
	}
	else
	{
		cout << "Not Empty.";
	} */
	// ====================================
	// Using the size() method
	/*
	cout << "We have a total of " << books.siz() << " books in the library.";
	*/
	// ====================================
	// Using insert() method
	// pair<map<string, int>::iterator,bool>
	/*
	auto p = books.insert({"Computer", 1932});

	cout << "Name: " << p.first->first << endl;
	cout << "Year: " << p.first->second << endl;
	// NOTE - If the key exist (0) and the insertion was not made, else (1).
	// NOTE - with the insert method you cannot update the value of key that already exist.
	cout << "Boolean: " << p.second << endl;
	*/
	// =========================
	// Using the erase(Key) method
	/*
		int n = books.erase("Solaria"); // n = 1
		// delete all elements
		auto it = books.begin();
		books.erase(it, books.end());
	*/
	// =========================
	// Using the find(Key) method
	// NOTE - If the key not in dictionary. It returns map::end()
	/*
		auto it = books.find("Solaria");
		cout << it->first << ' ' << it->second << endl;
	*/
}