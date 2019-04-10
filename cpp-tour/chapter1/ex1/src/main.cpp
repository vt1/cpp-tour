#include <iostream>
using namespace std;

int main()
{
	cout << "Enter miles for converting to kilometers:\n";
	int miles;
	cin >> miles;
	double kilometers = miles * 1.609;
	cout << "Distance in kilometers: " << kilometers << "\n";
}