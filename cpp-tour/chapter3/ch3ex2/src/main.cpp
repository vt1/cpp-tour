#include <iostream>
using namespace std;

double ctok(double temp_c)
{
	double temp_k = temp_c + 273.15;
	if (temp_k < -273.15)
		throw exception("Temp is below than -273.15'C");
	return temp_k;
}

int main()
{
	double temp_c = 0;
	cin >> temp_c;

	try
	{
		double temp_k = ctok(temp_c);
		cout << temp_k << endl;
	}
	catch (const std::exception& e)
	{
		cout << "Logic error: " << e.what() << '\n';
	}	
	catch (...)
	{
		cout << "Caught exception from ctok()" << '\n';
	}	
}