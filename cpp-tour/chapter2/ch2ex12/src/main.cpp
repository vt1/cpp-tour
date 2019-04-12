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

	for (int i = 0; i < names.size(); i++)
	{
		cout << names.at(i) << ' ' << scores.at(i) << endl;
	}
}