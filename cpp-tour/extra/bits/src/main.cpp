#include <iostream>
#include <bitset>
#include <string>
using namespace std;

constexpr int BITS = 8;
void show(const bitset<BITS>&);
void flip(bitset<BITS>&);
void flipByPos(bitset<BITS>&, int);
bool any(bitset<BITS>&);

int main()
{	
	int num = 102;
	bitset<BITS> bits(num);
	show(bits);
	//flipByPos(bits, 4);
	//show(bits);
	bits <<= 1;
	show(bits);
	bits >>= 1;
	show(bits);
	bits >>= 1;
	show(bits);
}

void show(const bitset<BITS>& bits)
{
	unsigned long int num = bits.to_ulong();
	string str = bits.to_string();
	cout << "Binary: " + str << '\t' << "Number: " << num << endl;
}

bool any(bitset<BITS>& bits)
{
	for (int i = 0; i < bits.size(); i++)
	{
		if (bits[i] == 1)
			return true;
	}
	return false;

	/*
	string str = bits.to_string();
	char target = '1';

	size_t found = str.find(target);
	if (found != string::npos)
		return true;
	return false;
	*/
}

void flip(bitset<BITS>& bits)
{
	for (int i = 0; i < bits.size(); i++)
	{
		bits[i] = bits[i] == 0 ? 1 : 0;
	}
}

void flipByPos(bitset<BITS>& bits, int pos)
{
	bits[pos] = bits[pos] == 0 ? 1 : 0;
}