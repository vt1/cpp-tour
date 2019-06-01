#include <iostream>
int main()
{
	int a = 10;
	int b = 13;
	int* p1 = &a;
	int* p2 = &a;
	*p1 = b;
	std::cout << (*p1) + (*p2) << '\n';		// 26

	int y = 25;
	int* p3 = &y;
	std::cout << p3 << '\n';	// adress Y
	std::cout << &p3 << '\n';	// adress p3
	std::cout << *p3 << '\n';	// value Y

	std::cout << "address=" << p3 << "\tvalue=" << *p3 << std::endl;
	p3++;	std::cout << "address=" << p3 << "\tvalue=" << *p3 << std::endl;	// adress offset by 4(int)

	p3--; 	std::cout << "address=" << p3 << "\tvalue=" << *p3 << std::endl;	// adress offset by 4(int)

	(*p3)++;	// inc value
	(*p3)--;
	(*p3)++;
	std::cout << *p3 << '\n';

	int var = ++(*p3);
	std::cout << var << ' ' << *p3 << '\n';

	int z = 32;
	int *ptr = &z;
	char ch = 'A';
	char &refCh = ch;	
	refCh += z;
	*ptr += ch;
	std::cout << z << ", " << ch << std::endl;	

	int c1 = 5;
	int c2 = 2;
	//c1 = c2++; // c1 = 2, c2 = 3;
	std::cout << c1 << '\n';

	unsigned char half_limit = 150;

	for (unsigned char i = 0; i < 2 * half_limit; ++i)
	{
		int a = 2;
	}
}