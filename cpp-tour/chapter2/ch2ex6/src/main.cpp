#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> nums;
	double total_distance = 0.0;
	double max_distance = 0.0;
	double min_distance = 0.0;

	for (double num; cin >> num;)
	{
		nums.push_back(num);
		max_distance = num > max_distance ? num : max_distance;
		min_distance = min_distance == 0.0 ? num : min_distance > num ? num : min_distance;
	}		

	for (double num : nums)	
		total_distance += num;

	cout << "Total distance is " << total_distance << '\n';
	cout << "Max distance is " << max_distance << '\n';
	cout << "Min distance is " << min_distance << '\n';
}