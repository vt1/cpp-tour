#include <iostream>
using namespace std;

int main()
{
	int i = 7;
	int& r = i;					// ref on var i;
	r = 9;						// i = 9;
	i = 10;						// r = 10;
	cout << r << ' ' << i;		// r, i = 10;
	cout << &r << ' ' << &i;	
}