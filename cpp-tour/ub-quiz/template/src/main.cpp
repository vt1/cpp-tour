#include <iostream>

template<typename T, int N>
void CallFoo(const T& obj)
{
	for (int i = 0; i < N; ++i)
		obj.foo(i);
}

class A
{
public:
	void foo(int param) const
	{
		if (param % m == 0)
			std::cout << param;
	}
	
	int m;
};

class B
{
public:
	void foo(int param) const { std::cout << param * m; }
	int m;
};

int main()
{
	B b;
	b.m = 3;

	A a;
	a.m = 2;

	CallFoo<A, 4>(a);
}