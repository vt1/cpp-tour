#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

constexpr int SEQUENCE_RAND_RANGE = 10;
constexpr int SEQUENCE_QTY = 4;

vector<int> init()
{
	srand(time(0));	
	
	vector<int> rand_range;
	for (int i = 0; i < SEQUENCE_RAND_RANGE; i++)
		rand_range.push_back(i);

	vector<int> res;
	for (int i = 0; i < SEQUENCE_QTY; i++)
	{
		int index = rand() % rand_range.size();
		res.push_back(rand_range[index]);
		rand_range.erase(rand_range.begin() + index);
	}

	return res;
}

vector<int> getUserInput()
{	
	vector<int> res;
	cout << "Enter four numbers: \n";	

	for (int num; cin >> num;)
	{
		res.push_back(num);
		
		if (res.size() == SEQUENCE_QTY)
			break;
	}

	if (!cin.good())
		throw exception("Not int");

	return res;
}

vector<int> checkBullsAndCows(vector<int> vec1, vector<int> vec2)
{	
	vector<int> res(2);

	for (int i = 0; i < SEQUENCE_QTY; i++)
	{
		for (int j = 0; j < SEQUENCE_QTY; j++)
		{
			if (vec1[i] == vec2[j])
			{
				i == j ? res[0] += 1 : res[1] += 1;
			}
		}
	}

	return res;
}

int main()
{
	vector<int> comp;
	vector<int> user;
	vector<int> bullsAndCows;

	comp = init();
	
	while (true)
	{
		try
		{
			user = getUserInput();
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
			return 1;
		}

		bullsAndCows = checkBullsAndCows(comp, user);
		cout << "Bulls: " << bullsAndCows[0] << " Cows: " << bullsAndCows[1] << endl;

		if (bullsAndCows[0] == 4)
			break;
	}	

	cout << "You win. Sequence is: ";
	for (int elem : comp)
		cout << elem;
}