#include <iostream>

int main()
{	
	int a = 1;
	int b = 1;

	int* pa = &a;
	int* pb = &b;

	std::cout << (pa == pb);	
	return 0;
}