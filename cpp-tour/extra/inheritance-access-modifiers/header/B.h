#pragma once
#include "A.h"

//public inheritance
class B : public A
{
public:
	void func();
};

void B::func()
{
	int a;
	a = privateDataA;		// err
	a = protectedDataA;		// ok
	a = publicDataA;		// ok
}