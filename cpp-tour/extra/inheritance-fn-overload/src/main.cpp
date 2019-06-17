#include <iostream>
#include "../header/StackCheck.h"
using namespace std;

int main()
{
	StackCheck sc;
	sc.push(11);
	sc.push(22);
	sc.push(33);	

	cout << endl << sc.pop();
	cout << endl << sc.pop();
	cout << endl << sc.pop();
	cout << endl << sc.pop();
	cout << endl;

	return 0;
}