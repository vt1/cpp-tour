#include <iostream>
//sequence of calls constructor and destructor

class A
{
public:
	A() { std::cout << 1; }
	~A() { std::cout << 2; }
};

class B : public A
{
public:
	B() { std::cout << 3; }
	~B() { std::cout << 4; }
};

int main()
{
	B* pb = new B;
	delete pb;
}