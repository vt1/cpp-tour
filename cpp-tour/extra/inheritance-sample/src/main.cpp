#include <iostream>
#include "../header/manager.h"
#include "../header/scientist.h"
#include "../header/laborer.h"
using namespace std;

int main()
{
	manager m1, m2;
	scientist s1;
	laborer l1;

	cout << endl;
	cout << "\n Enter datazz about first manager";
	m1.putdata();

	cout << "\n Enter datazz about second manager";
	m2.putdata();

	cout << "\n Enter datazz about first scientist";
	s1.putdata();

	cout << "\n Enter datazz about first laborer";
	l1.putdata();

	cout << "\n Enter datazz about first manager";
	m1.getdata();

	cout << "\n Enter datazz about second manager";
	m2.getdata();

	cout << "\n Enter datazz about first scientist";
	s1.getdata();

	cout << "\n Enter datazz about first laborer";
	l1.getdata();

	cout << endl;
	return 0;
}