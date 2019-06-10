#include <iostream>
#include <fstream>
using namespace std;

int main()
{	
	fstream fs;
	fs.open("test.txt", fstream::in | fstream::out | fstream::app);
	fs << "some text to write in txt";
	fs.close();

	ifstream infile;
	string str;
	infile.open("test.txt");
	if (!infile)
	{
		cerr << "Unable to open file test.txt";
		exit(1);
	}

	while (infile >> str)
	{
		cout << str << '\n';
	}

	infile.close();	
}