#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void print(const vector<string>&, const vector<double>&);

int main()
{
	vector<string> names;	
	vector<double> ages;	
	vector<string> copynames;

	cout << "Enter 5 names: " << endl;
	for (int i = 0; i < 5; i++)
	{
		string name;
		getline(cin, name);
		names.push_back(name);
	}

	cout << "Enter their age: " << endl;
	for (int i = 0; i < 5; i++)
	{
		double age;
		cin >> age;
		ages.push_back(age);
	}

	print(names, ages);

	copynames = names;
	sort(names.begin(), names.end());
		
	/*
	for (int i = 0; i < names.size(); i++)
		for (int j = 0; j < copynames.size(); j++)
			if(names[i] == copynames[j])
				ages.push_back(ages[j]);
	*/

	for (int i = 0; i < names.size(); i++)
	{
		vector<string>::iterator it = find(copynames.begin(), copynames.end(), names[i]);
		ages.push_back(ages[it - copynames.begin()]);
	}	
	ages.erase(ages.begin(), ages.begin() + 5);

	cout << '\n';
	print(names, ages);
}

void print(const vector<string>& svec, const vector<double>& dvec)
{
	for (int i = 0; i < svec.size(); i++)
	{
		cout << svec.at(i) << ' ' << dvec.at(i) << endl;
	}		
}