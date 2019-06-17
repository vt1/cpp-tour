#pragma once
#include <iostream>
using namespace std;

class Counter
{
protected:
	unsigned int count;
public:
	Counter() : count(0) {}
	Counter(int c) : count(c) {}
	unsigned int get_count() const { return count; }
	Counter operator++() { return Counter(++count); }
};
