#pragma once
using namespace std;
#include <iostream>

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance(int ft, float in) : feet(ft), inches(in){}
	void getdist()
	{
		std::cout << "Enter feet: "; cin >> feet;
		std::cout << "Enter inches: "; cin >> inches;
	}
	void showdist() const
	{
		cout << feet << '-' << inches; 
	}
};