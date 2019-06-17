#pragma once
#include <iostream>
#include <process.h>
#include "../header/Stack.h"
using namespace std;

class StackCheck : public Stack
{
public:
	void push(int var);
	int pop();
};

void StackCheck::push(int var)
{
	if (top >= MAX - 1)
	{
		cout << "\nError: stack is full";
		exit(1);
	}
	Stack::push(var);
}

int StackCheck::pop()
{
	if (top < 0)
	{
		cout << "\nError: stack is empty";
		exit(1);
	}
	return Stack::pop();
}