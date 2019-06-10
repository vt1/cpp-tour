#include "../header/Stack.h"
#include <iostream>
using namespace std;

int main()
{
	Stack stack;

	stack.push(11);
	stack.push(22);
	cout << "Pop: " << stack.pop() << endl;
	cout << "Pop: " << stack.pop() << endl;
	stack.push(50);
	stack.push(70);
	cout << "Pop: " << stack.pop() << endl;
	cout << "Pop: " << stack.pop() << endl;
}