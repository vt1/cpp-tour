#pragma once
#include "A.h"

//private inheritance
class C : private A
{
public:
	void func();
};

void C::func()
{
	int a;
	a = privateDataA;		// err
	a = protectedDataA;		// ok
	a = publicDataA;		// ok	
}