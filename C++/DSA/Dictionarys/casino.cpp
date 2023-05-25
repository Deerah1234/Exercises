#include <iostream>
#include <map>

using namespace std;

int main() {
	int x;
	string name, operation;
	map<string, int> casino;
	map<string, int>::iterator it;

	while (cin >> name >> operation) {
		// Entry operation
		if ( operation == "enter") {
			it = casino.find(name);
			if ( it == casino.end() ) {
				casino.insert({name, 0});
			} else {
				cout << it->first << " is already in the casino" << endl;
			}
		}

		// wins operation
		else if ( operation == "wins") {
			cin >> x;
			it = casino.find(name);
			if ( it == casino.end() ) {
				cout << it->first << " is not in the casino" << endl;
			} else {
				it->second += x;
			}
		}

		// Leave operation
		else if ( operation == "leaves") {
			it = casino.find(name);
			if ( it == casino.end() ) {
				cout << it->first << " is not in the casino " << endl;
			} else {
				cout << it->first << " has won " << it->second << endl;
			}
		}

		if ( name == "end" ) break;
	}

	cout << "----------" << endl;
	for ( it = casino.begin(); it != casino.end() ; ++it ) {
		cout << it->first << " is winning " << it->second << endl;
	}

}