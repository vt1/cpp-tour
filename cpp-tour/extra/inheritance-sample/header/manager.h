#pragma once
#include <iostream>
#include "employee.h"
using namespace std;

class manager : public employee
{
private:
	char title[LEN];
	double dues;
public:
	void putdata();
	void getdata() const;
};

void manager::putdata()
{
	employee::putdata();
	cout << "\n Enter position: "; cin >> title;
	cout << "\n Enter dues(double): "; cin >> dues;
}

void manager::getdata() const
{
	employee::getdata();
	cout << "\n Position: " << title;
	cout << "\n Dues: " << dues;
}