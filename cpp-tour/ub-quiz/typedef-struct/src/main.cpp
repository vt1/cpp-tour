#include <iostream>

typedef struct 
{
	int a;
	int b;
} MyStruct;

typedef struct
{
	int foo;
} Struct;

typedef long long LL;

int main()
{	
	//part 1
	const LL base = 3 * 3 * 3;
	MyStruct* ps = new MyStruct();
	std::cout << ps->a;	

	//part 2
	Struct struct1;
	struct1.foo = 5;

	Struct struct2 = struct1;
	struct2.foo = 10;
	std::cout << struct1.foo;

	return 0;
}