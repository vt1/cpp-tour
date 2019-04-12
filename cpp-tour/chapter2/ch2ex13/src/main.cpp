#include <iostream>
#include <vector>
using namespace std;

bool isNameExist(vector<string> vec, string name)
{
	for (string elem : vec)
		if (elem == name)
			return true;
	return false;
}

int getIndexByName(vector<string> vec, string name)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec.at(i) == name)
			return i;
	}
	return -1; 
}

int main()
{
	vector<string> names;
	vector<int> scores;
	string name;
	int score = 0;

	while (cin >> name >> score)
	{
		if (name == "NoName" && score == 0)
			break;

		if (!isNameExist(names, name))
		{
			names.push_back(name);
			scores.push_back(score);
		}
		else
		{
			cout << "Name is already taken" << endl;
		}
	}

	cout << '\n';
	for (int i = 0; i < names.size(); i++)
	{
		cout << names.at(i) << ' ' << scores.at(i) << endl;
	}
	cout << '\n';

	while (cin >> name)
	{
		if (isNameExist(names, name))
		{
			int score_index = getIndexByName(names, name);
			cout << scores.at(score_index) << endl;
		}
		else
		{
			cout << "Name is not found" << endl;
		}
	}
}