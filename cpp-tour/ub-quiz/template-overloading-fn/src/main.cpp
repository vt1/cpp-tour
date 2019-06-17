#include <iostream>

template<typename T>
void foo(T v)
{
	std::cout << "A";
}

void foo(int v)
{
	std::cout << "B";
}

int main()
{
	foo('x');
	foo(10);
	foo(0.5);
}