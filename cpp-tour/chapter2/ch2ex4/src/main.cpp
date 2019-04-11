#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);
	
	double sum = 0;
	for (double x : temps)
		sum += x;
	cout << "Average temperature is " << sum / temps.size() << '\n';	
}