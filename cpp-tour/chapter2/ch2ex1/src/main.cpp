#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	char c = 'a';

	while (i < 100)
	{
		cout << char(c + i) << " " << i << "\n";
		++i;
	}

	for (int j = 0; j < 100; ++j)
	{
		cout << char(c + j) << " " << j << "\n";
	}
}