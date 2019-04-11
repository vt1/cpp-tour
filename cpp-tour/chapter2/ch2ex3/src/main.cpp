#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vi = { 5, 6, 7, 3, 9 };
	for (int i = 0; i < vi.size(); ++i)
	{		
		cout << vi[i] << "\n";
	}

	for (int i : vi)
	{
		cout << i << "\n";
	}
}