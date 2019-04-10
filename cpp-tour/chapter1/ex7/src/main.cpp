#include <iostream>
using namespace std;

int main()
{
	int one_cent, five_cent, ten_cent, twenty_five_cent, fifty_cent;
	int total;
	cout << "How many one cent coins do you have?\n";
	cin >> one_cent;
	cout << "How many five cent coins do you have?\n";
	cin >> five_cent;
	cout << "How many ten cent coins do you have?\n";
	cin >> ten_cent;
	cout << "How many twenty five cent coins do you have?\n";
	cin >> twenty_five_cent;
	cout << "How many fifty cent coins do you have?\n";
	cin >> fifty_cent;

	cout << "You have " << one_cent << " one cent coins\n";
	cout << "You have " << five_cent << " five cent coins\n";
	cout << "You have " << ten_cent << " ten cent coins\n";
	cout << "You have " << twenty_five_cent << " twenty five cent coins\n";
	cout << "You have " << fifty_cent << " fifty cent coins\n";

	total = one_cent + five_cent * 5 + ten_cent * 10 + twenty_five_cent * 25 + fifty_cent * 50;
	cout << "The total value of your coins is " << total << "\n";
	cout << "Dollars: " << total / 100 << " cents: " << total % 100 << "\n";
}