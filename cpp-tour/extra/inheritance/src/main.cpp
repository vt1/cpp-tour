#include <iostream>
#include "../header/CountDn.h"

int main()
{
	CountDn c1; // if countDn doesnt have constructor, c1 uses counter's default constructor
	CountDn c2(100);

	cout << "\nc1= " << c1.get_count();
	cout << "\nc2= " << c2.get_count();

	++c1; ++c1; ++c1;
	--c2; --c2;
	cout << "\nc2= " << c2.get_count();
	cout << "\nc1= " << c1.get_count();
	--c1; --c1;
	cout << "\nc1= " << c1.get_count();

	CountDn c3 = --c2;
	cout << "\nc3= " << c3.get_count();

	return 0;
}