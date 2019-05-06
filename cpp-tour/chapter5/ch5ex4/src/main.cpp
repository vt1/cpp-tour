#include <iostream>
#include <vector>
using namespace std;

vector<int> getQuantityLetters(const vector<string>&);
string longest(const vector<string>&);

int main()
{
	vector<string> words = { "c++", "got", "code", "music", "chmod+" };
	vector<int> qty_letters = getQuantityLetters(words);

	for (int elem : qty_letters)
		cout << elem << endl;

	cout << longest(words);	
}

vector<int> getQuantityLetters(const vector<string>& vec)
{
	vector<int> result;
	for (string elem : vec)
		result.push_back(elem.length());
	return result;
}

string longest(const vector<string>& vec)
{
	string result = vec[0];
	for (string elem : vec)
		result = result.length() < elem.length() ? elem : result;
	return result;
}