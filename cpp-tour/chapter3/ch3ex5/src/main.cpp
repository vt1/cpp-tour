#include <iostream>
using namespace std;

int fib(int n)
{
	if (n <= 2)
		return 1;

	int a = 1;
	int b = 1;
	int res = 0;

	for (int i = 2; i < n; i++)
	{
		res = a + b;	
		a = b;
		b = res;
		cout << res << endl;
	}
	return res;
}

int main()
{
	fib(46);
}