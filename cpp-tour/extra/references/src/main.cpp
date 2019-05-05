#include <iostream>

int main()
{
	int num = 5;
	int& refNum = num;	
	refNum = 20;	
	num = 2;	
}