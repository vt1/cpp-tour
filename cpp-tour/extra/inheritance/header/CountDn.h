#pragma once
#include "../header/Counter.h"

class CountDn : public Counter
{
public:
	CountDn() : Counter() {}
	CountDn(int c) : Counter(c) {}
	CountDn operator--() { return CountDn(--count); }
};