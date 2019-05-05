#include <iostream>
using namespace std;

int main()
{
	int i = 17;
	int j = 29;	
	int* const p1 = &i;		//ok
	cout << p1 << " " << &p1 << endl;
	*p1 = 29;				//ok, the value referred to by the pointer may change		
	cout << p1 << " " << &p1 << endl;	
}