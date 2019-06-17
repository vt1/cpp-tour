#include <iostream>

//What is the value returned by sizeof(char)?

int main()
{
	//const char *ch = "char12312asda"; // 4 bytes for 32-bit, 8 for 64-bit
	char ch = 'c';
	char arr[10] = { 'a', 'b', 'c' };
	std::cout << sizeof(arr) << std::endl;	
}