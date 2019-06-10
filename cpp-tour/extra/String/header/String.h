#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
	static const int SZ = 80;
	char str[SZ];
public:
	String() { str[0] = '\0'; }
	String(const char s[]) { strcpy_s(str, s); }	
	void display() { cout << str; }
	void concat(String);
};

void String::concat(String s2)
{
	if (strlen(str) + strlen(s2.str) < SZ)
	{
		strcat_s(str, s2.str);
	}
	else
	{
		cout << "\nOverflow";
	}
}