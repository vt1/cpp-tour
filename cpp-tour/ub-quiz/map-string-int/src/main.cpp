#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{	
	/*
	PART 1

	map<string, int> m;
	string k1 = "a";
	string k2 = k1;
	m[k1] = 1;
	m[k2] = 2;
	cout << m[k1];
	*/

	map<int, string> fieldMap;
	
	fieldMap.insert(make_pair<int, string>(0, string("name")));
	fieldMap.insert(make_pair<int, string>(1, string("id")));
	fieldMap.insert(make_pair<int, string>(4, string("key")));
	
	for (int i = 0; i < 4; ++i)
	{
		if (fieldMap[i] == "key")
			cout << 1;
		else
			cout << 0;
	}		

	cout << fieldMap.size();	
}

