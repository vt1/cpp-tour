#include <iostream>
using namespace std;

int main()
{
	int x = 3;
	float y = 3.0;	
	if (x == y)		// true, before comparing, x converting to float (3 == 3.0) -> (3.0 == 3.0)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}