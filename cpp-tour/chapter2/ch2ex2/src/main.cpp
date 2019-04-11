#include <iostream>
using namespace std;

int square(int number)
{
	int result = 0;
	for (int i = 0; i < number; ++i)
	{
		result += number;
	}
	return result;
}

int main()
{	
	cout << square(7) << endl;
}