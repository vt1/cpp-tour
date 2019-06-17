#pragma once
#include <iostream>
#include "employee.h"
using namespace std;

class scientist : public employee
{
private:
	int pubs;
public:
	void putdata();
	void getdata() const;
};

void scientist::putdata()
{
	employee::putdata();
	cout << "\n Enter pubs: "; cin >> pubs;	
}

void scientist::getdata() const
{
	employee::getdata();
	cout << "\n Pubs: " << pubs;	
}