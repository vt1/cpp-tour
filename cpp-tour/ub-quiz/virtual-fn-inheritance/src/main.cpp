#include <iostream>

//What's the value of val?

class A
{
public:
	virtual int value() { return 1; }
};

class B : public A
{
public:
	int value() { return 2; }
};

int main()
{
	A* obj = new B();	
	int val = obj->value();	
	std::cout << val;
}