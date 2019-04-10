#include <iostream>
using namespace std;

// functions keep_window_open() and simple_error() are from std_lib_facilities.h;

inline void keep_window_open()
{
	cin.clear();
	cout << "Please enter a character to exit\n";
	char ch;
	cin >> ch;
	return;
}

inline void simple_error(string s) 
{
	cerr << "error: " << s << '\n';
	keep_window_open();
	exit(1);
}

int main()
{
	cout << "Enter addressee name please:\n";
	string first_name;
	cin >> first_name;
	cout << "Dear, " << first_name << "!\n";
	cout << "How are you?\n";	
	cout << "What is your friend name?\n";
	string friend_name;
	cin >> friend_name;
	cout << "How long haven't you seen " << friend_name << "?\n";
	cout << "Choose friend's sex: (m - male, f - female)\n";
	char friend_sex = '0';
	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "If you'll see " << friend_name << " please, ask him to call me\n";
	else
		cout << "If you'll see " << friend_name << " please, ask her to call me\n";
	
	cout << "How old is addressee? " << first_name << "\n";
	int age;
	cin >> age;	

	if (age <= 0 || age >= 110)
		simple_error("Are you kidding!");
	else
		cout << "I've heard that you have just celebrated your birth and now you are " << age << "\n";

	if (age < 12)
		cout << "You will be " << age + 1 << " years old next year\n";

	if (age > 70)
		cout << "I hope your retirement is not boring\n";

	if (age == 17)
		cout << "You can vote next year\n";

	cout << "Sincerely yours " << first_name << "\n\n";
}