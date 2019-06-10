#include <iostream>
using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);

struct Distance
{
	int feet;
	float inches;
};

void engldisp(Distance);
void engldisp(float);

int main()
{
	repchar();
	repchar('=');
	repchar('+', 30);

	Distance d1 = { 10, 5.2F };
	float d2 = 4.2F;
	engldisp(d1);
	engldisp(d2);

	return 0;
}

void repchar()
{
	for (int j = 0; j < 45; j++)
		cout << '*';
	cout << endl;
}

void repchar(char ch)
{
	for (int j = 0; j < 45; j++)
		cout << ch;
	cout << endl;
}

void repchar(char ch, int n)
{
	for (int j = 0; j < n; j++)
		cout << ch;
	cout << endl;
}

void engldisp(Distance dist)
{
	cout << dist.feet - dist.inches << endl;
}

void engldisp(float dist)
{
	int feet = static_cast<int>(dist / 12);
	float inches = dist - (feet * 12);
	cout << feet - inches << endl;
}