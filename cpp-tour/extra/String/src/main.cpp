#include <iostream>
#include "../header/String.h"
using namespace std;

int main()
{	/*
	String s1("Hello^");
	String s2 = "Hello^^";
	String s3;

	cout << "\ns1= "; s1.display();
	cout << "\ns2= "; s2.display();
	cout << "\ns3= "; s3.display();

	s3 = s1;
	cout << "\ns3= "; s3.display();

	s3.concat(s2);
	cout << "\ns3= "; s3.display();
	cout << endl;
	*/

	int a = 10;
	int b = 13;
	int* p1 = &a;
	int* p2 = &a;
	
	*(p1) = b;
	
	cout << *(p1) + *(p2);
	

	return 0;
}