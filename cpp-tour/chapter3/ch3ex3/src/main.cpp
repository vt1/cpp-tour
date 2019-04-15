#include <iostream>
using namespace std;

void discriminant(double a, double b, double c)
{
	double d = (b * b) - (4 * a * c);
	if (d < 0)
	{
		throw exception("No roots");
	}
	else if (d > 0)
	{
		double x1 = (-b + sqrt(d)) / (2 * a);
		double x2 = (-b - sqrt(d)) / (2 * a);
		cout << "Two roots: " << x1 << " and " << x2 << endl;
	}
	else
	{
		cout << "One root: " << -b / (2 * a);
	}
}

int main()
{
	//ax^2 + bx + c = 0;
	double a, b, c;
	cin >> a >> b >> c;
	
	try
	{
		discriminant(a, b, c);
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}	
}