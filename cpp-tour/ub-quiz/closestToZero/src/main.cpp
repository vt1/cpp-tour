#include <iostream>
#include <stdio.h>
using namespace std;

//task from test

int main()
{
	int ints[] = { -6, -10, 6, 8, 10, 5, 2, -2, 1 };
	int arr_size = sizeof(ints) / sizeof(ints[0]);
	int closestToZero = 0;

	for (int i = 0; i < arr_size; i++)
	{
		if(abs(ints[i]) < abs(ints[closestToZero]))
			closestToZero = i;

		if (abs(ints[i]) == abs(ints[closestToZero]))
			closestToZero = ints[i] > ints[closestToZero] ? i : closestToZero;
	}

	printf("Closest element is %d \n", ints[closestToZero]);
}