#pragma once

class Stack
{
protected:
	enum {MAX = 3};
	int st[MAX];
	int top;
public:
	Stack() { top = -1; }
	void push(int var) { st[++top] = var; }
	int pop() { return st[top--]; }
};