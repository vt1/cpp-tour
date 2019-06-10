#pragma once
#include <iostream>

class Stack
{
public:
	Stack() : top(0) {};
	void push(int value);
	int pop();
private:
	int top;
	static const int MAX = 10;
	int st[MAX];
};

void Stack::push(int value)
{
	st[top] = value;
	top++;	
}

int Stack::pop()
{	
	return st[--top];
}