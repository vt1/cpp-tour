#include <iostream>
#include <bitset>
#include <string>
using namespace std;

constexpr int BITS = 7;
string convert_bit(string message, string bits_converted);
string convert_norris(string bits);

int main()
{
	string message;
	getline(cin, message);

	string bit_string;
	bit_string = convert_bit(message, bit_string);
	bit_string = convert_norris(bit_string);

	cout << bit_string << endl;
}

string convert_bit(string message, string bits_converted)
{
	for (int i = 0; i < message.length(); ++i)
	{
		char c = message[i];
		bitset<BITS> bits(c);
		bits_converted += bits.to_string();
	}

	return bits_converted;
}

string convert_norris(string bits)
{
	string res;
	string tmp;
	int isZero = -1;

	for (string::iterator it = bits.begin(); it != bits.end(); ++it)
	{
		int isNewZero = (*it == '0');
		if (isNewZero == isZero)
		{
			tmp += "0";
		}
		else
		{
			isZero = isNewZero;
			if (res.length() > 0)
				res += " ";

			res += tmp;
			tmp = isZero ? "00 0" : "0 0";
		}
	}

	if (tmp.length() > 0)
	{
		if (res.length() > 0)
			res += " ";
		res += tmp;
	}

	return res;
}
