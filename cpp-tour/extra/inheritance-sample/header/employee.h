#pragma once
#include <iostream>
using namespace std;

class employee
{
protected:
	static const int LEN = 80;
private:
	char name[LEN];
	unsigned long number;
public:
	void putdata();
	void getdata() const;
};

void employee::putdata()
{
	cout << "\n Enter surname: "; cin >> name;
	cout << "\n Enter number: "; cin >> number;
}

void employee::getdata() const
{
	cout << "\n Surname: " << name;
	cout << "\n Number: " << number;
}