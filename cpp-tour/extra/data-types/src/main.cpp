#include <iostream>

/*-------------------------------------------------
	DATATYPE MODIFIERS - unsigned/signed/long/short
--------------------------------------------------*/

void _printSizeType();

int main()
{
	bool b;							// 1

	char c;							// 1, [-128; 127] || [0; 255]
	signed char sc;					// 1, [-128; 127]
	unsigned char uc;				// 1, [0; 255]
	wchar_t wc;						// win - 2, [0; 65535], lin - 4, [0; 4 294 967 295]
	char16_t c16;					// 2, [0; 65535]
	char32_t c32;					// 4, [0; 4 294 967 295]

	int i;							// 4, [−2 147 483 648; 2 147 483 648]
	unsigned int ui;				// 4, [0; 4,294,967,295]
	long int li;					// 4, [-2,147,483,648; 2,147,483,647]
	unsigned long int uli;			// 4, [0; 4,294,967,295]
	long long int lli;				// 8, [-(2^63); (2^63)-1]
	unsigned long long int ulli;	// 8, [0; 18,446,744,073,709,551,615]

	float f;						// 4, [3.4E-38; 3.4E+38]
	double d;						// 8, [1.7E-308; 1.7E+308]	
	
	short s;						// 2, [-32768; 32768]
	unsigned short us;				// 2, [0; 65535]

	long l;							// 4, [−2 147 483 648; 2 147 483 648]
	unsigned long ul;				// 4, [0; 4 294 967 295]	
	long long ll;					// 8, [9 223 372 036 854 775 808; 9 223 372 036 854 775 807]
	unsigned long long ull;			// 8, [0; 18 446 744 073 709 551 615]

	_printSizeType();
}

void _printSizeType()
{
	std::cout << "Size of char : " << sizeof(char) << '\n';
	std::cout << "Size of int : " << sizeof(int) << '\n';
	std::cout << "Size of short int : " << sizeof(short int) << '\n';
	std::cout << "Size of long int : " << sizeof(long int) << '\n';
	std::cout << "Size of float : " << sizeof(float) << '\n';
	std::cout << "Size of double : " << sizeof(double) << '\n';
	std::cout << "Size of wchar_t : " << sizeof(wchar_t) << '\n';
}