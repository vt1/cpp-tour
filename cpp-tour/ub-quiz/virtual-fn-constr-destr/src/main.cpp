#include <iostream>
using namespace std;

class dog
{
public:
	dog()
	{
		cout << "Constructor called" << endl;
		bark();
	}

	~dog() { bark(); }
	virtual void bark()	{ cout << "Virtual fn called" << endl; }
	void seeCat() { bark(); };
};

class yellowdog : public dog
{
public:
	yellowdog() { cout << "Derived class constructor called" << endl; }
	void bark() { cout << "Derived class Virtual fn called" << endl; }
};

int main()
{
	yellowdog d;
	d.seeCat();
}