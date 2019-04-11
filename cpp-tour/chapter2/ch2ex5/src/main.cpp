#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;) 
		temps.push_back(temp);	
	cout << "Median temperature: " << temps[temps.size() / 2] << endl;
}