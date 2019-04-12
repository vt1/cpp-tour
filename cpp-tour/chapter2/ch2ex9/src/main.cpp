#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{	
	string inumber;	
	vector<string> numbers = { "zero", "one", "two", "three", "four", "five",
								"six", "seven", "eight", "nine" };
	cout << "Enter number: ";
	while(cin >> inumber)
	{
		for (int i = 0; i < numbers.size(); ++i)
		{
			if (inumber.length() == 1)
			{
				if (i == stoi(inumber))
				{
					cout << numbers.at(i) << endl;
					break;
				}
			}
			else
			{
				if (inumber == numbers[i])
				{
					cout << i << endl;
					break;
				}
			}
		}
	}
}