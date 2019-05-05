#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

/*-----
	constexpr is a feature added in C++ 11.

	The main idea is performance improvement of programs by doing
	computations at compile time rather than run time.

	Spend time in compilation and save time at run time.
-----*/

constexpr long int fib(int n)
{
	return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
	auto start = high_resolution_clock::now();	

	const long int res = fib(30);		// gcc, 0.003 seconds
	long int res2 = fib(30);			// gcc, 0.017 seconds

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() << endl;
}