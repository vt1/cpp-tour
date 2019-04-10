#include <iostream>
using namespace std;

int main()
{
	cout << "Enter word: \n";
	string word;
	while (cin >> word)
	{
		if (word == "null")
			cout << 0 << "\n";
		if (word == "one")
			cout << 1 << "\n";
		if (word == "two")
			cout << 2 << "\n";
		if (word == "three")
			cout << 3 << "\n";
		if (word == "four")
			cout << 4 << "\n";		
	}
}