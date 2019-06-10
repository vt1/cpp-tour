#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0) {}
	Distance(int ft, float in) : feet(ft), inches(in) {}
	void getDist()
	{
		cout << "\nEnter feet:"; cin >> feet;
		cout << "\nEnter inches:"; cin >> inches;
	}
	void showDist()
	{
		cout << feet << '-' << inches;
	}
	void add_dist(Distance, Distance);
};

void Distance::add_dist(Distance d2, Distance d3)
{
	inches = d2.inches + d3.inches;
	feet = 0;
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
	feet += d2.feet + d3.feet;
}

int main()
{
	Distance dist1, dist3;
	Distance dist2(11, 6.25);
	dist1.getDist();
	dist3.add_dist(dist1, dist2);
	dist1.showDist();
	dist2.showDist();
	dist3.showDist();
}

int x = 2;

void foo(int const* x, int* const y)
{
	int a;

	*x = 5;
	x = &a;	// x - pointer to const
	*y = 5;
	y = &a; // y - const pointer
}

void foo(int a, int b = 15)
{
	cout << a << '\t' << b;
}

int& setx()
{
	return x;
}

int main()
{
	
	int x, y;
	foo(&x, &y);

#define X 10
	int z = X * X;
#undef Y

#ifndef Y
	z += 10;
#endif

#define Y 1
	z += Y;
	cout << z;
	cin.get();
	return 0;
	

	foo(10, 12);

	cout << x;
	setx() = 200;
	cout << x;
}

int* func()
{
	int w = 5;
	return &w;
}

int main()
{
	int* p = func();
	cout << *p << endl;
	int test = 5;	
	cout << *p;
}