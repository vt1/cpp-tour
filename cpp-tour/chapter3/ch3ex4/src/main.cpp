#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int qty;
	int sum = 0;
	vector<int> nums;	
	
	try
	{
		cout << "Enter quantity of sum values: ";
		cin >> qty;
		if (!cin.good())
			throw exception("Not int");

		cout << "Enter some numbers: ";
		for (int num; cin >> num;)
			nums.push_back(num);
		for (int i = 0; i < qty; ++i)
			sum += nums.at(i);		
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
		return 1;
	}

	cout << "Sum of first " << qty << " nums is " << sum << endl;
}