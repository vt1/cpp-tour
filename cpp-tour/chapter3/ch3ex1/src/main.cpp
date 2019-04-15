#include <iostream>
#include "../header/std_lib_facilities.h"
using namespace std;

int main() 
{	
	try
	{		
		int i = 0;
		int j = 9;

		while (i < 10)
		{
			++j;
			if (j < i)
				cout << "Success!\n";
		}
		
		vector<int> vec = { 2, 3 };
		vec.at(2);

		keep_window_open();
		return 0;
	}
	catch (exception& e)
	{
		cerr << "Error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...)	// default exception
	{
		cerr << "Unknown exception\n";
		keep_window_open();
		return 2;
	}
}