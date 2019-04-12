#include <iostream>
using namespace std;

void calculate(int totalRice)
{
	int rice = 1;
	int cell = 1;
	while (rice < totalRice)
	{
		rice *= 2;
		cell++;
		cout << "Rice " << rice << " cell " << cell << endl;		
	}	
	cout << cell << " CELLS FOR " << rice << " RICE" << endl;
}

void longlong()
{
	long long rice = 1;	
	for (int cell = 1; cell <= 64; ++cell)
	{
		rice *= 2;
		cout << rice << endl;
		cout << cell << endl;
	}	
}

int main()
{
	cout << "Cells for 1000 rice" << endl;
	calculate(1000);
	
	cout << "Cells for 1 000 000 rice" << endl;
	calculate(1000000);

	cout << "Cells for 1 000 000 000 rice" << endl;
	calculate(1000000000);	

	longlong();
}