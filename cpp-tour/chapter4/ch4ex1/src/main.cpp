#include <iostream>
#include <vector>
using namespace std;

int fValue(int x);						// passing parameters by value
void print(const vector<double>& vec);	// passing parameters by constant reference
void init(vector<double>& vec);			// passing parameters by reference
int fRef(int& x);																

int main()
{
	int xx = 0;
	cout << fValue(xx) << '\n';
	cout << xx << '\n';

	cout << fRef(xx) << '\n';
	cout << xx << '\n';

	vector<double> vd1(10);
	vector<double> vd2(1000000);
	init(vd1);
	init(vd2);
	print(vd1);
	print(vd2);
}

int fValue(int x)
{	
	return ++x;
}

void print(const vector<double>& vec)
{	
	for (int i = 0; i < vec.size(); ++i)	
		cout << vec[i];	
}

void init(vector<double>& vec)
{
	for (int i = 0; i < vec.size(); ++i)
		vec[i] = i;
}

int fRef(int& x)
{
	return ++x;
}