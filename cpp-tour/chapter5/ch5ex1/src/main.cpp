#include <vector>
#include <iostream>
using namespace std;

vector<int> reverse(vector<int>);
void reverseByRef(vector<int>&);
void print(const vector<int>&);

int main()
{
	vector<int> vec = { 1, 3, 5, 7, 9 };
	print(vec);	cout << '\n';

	vector<int> new_vec = reverse(vec);
	print(new_vec); cout << '\n';

	reverseByRef(vec);
	print(vec);	cout << '\n';
}

vector<int> reverse(vector<int> vec)
{
	vector<int> result;
	for (int i = vec.size() - 1; i >= 0; --i)
		result.push_back(vec.at(i));
	return result;
}

void reverseByRef(vector<int>& vec)
{
	for (int i = vec.size() - 1; i >= 0; --i)
		for (int j = 0; j < i; j++)
			swap(vec[j], vec[j + 1]);
}

void print(const vector<int>& vec)
{
	for (int elem : vec)
		cout << elem;	
}