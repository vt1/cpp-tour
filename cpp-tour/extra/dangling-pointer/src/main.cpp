#include <stdlib.h>
#include <iostream>
#include <stdio.h>

void fsample()
{
	/*-------
		Deallocating a memory pointed by ptr causes
		dangling pointer
	-------*/
	int* ptr = (int*)malloc(sizeof(int));
	*ptr = 7;

	/*--------
		After below free call, ptr becomes a
		dangling pointer
	--------*/
	free(ptr);

	// No more a dangling pointer 
	ptr = NULL;
}

int* fun()
{
	/*
		x is local variable and goes out of
		scope after an execution of fun() is
		over.
	*/ 
	int x = 5;
	return &x;
}

int main()
{
	//first sample, dangling pointer occurs cause de-allocation of memory
	fsample();

	//second sample, the pointer pointing to local variable becomes 
	//dangling when local variable is not static. 
	int* p = fun();
	fflush(stdin);

	//p points to something which is not valid anymore 
	printf("%d", *p);
	std::cout << p << '\n';	 //garbage adress
	std::cout << *p << '\n'; //garbage adress

	//third sample, variable goes out of scope
	int* ptr;

	if (true)
	{
		int ch = 5;
		ptr = &ch;
	}
	//here ptr is dangling pointer
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
}