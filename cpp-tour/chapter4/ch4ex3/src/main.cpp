void f(int a, int& r, const int& cr);

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	f(x, y, z);	  // x == 0, y == 1; z == 0;
	//f(1, 2, 3); // error: arg r must be a var
	f(1, y, 3);	  // since ref cr is constant, we can pass literal

	/*--------
		we can pass literal as third param because
		the compiler reserves an int variable for the cr argument to the f(),
		f(1, y, 3) // means: int _compiler_generated = 3;
		f(1, y, _compiler_generated);
		object(_compiler_generated) which created by compiler is called temporary object
	--------*/

	/*--------
		1. for passing very small objects we should use passing arguments by value
		2. for passing large objects that cannot be changed, we should use constant ref
		3. we should return the result, instead of modifying the object passed by ref
		4. passing by ref should only be used in most necessary cases
	*/
}

void f(int a, int& r, const int& cr)
{
	++a;		// modify local var a
	++r;		// modify object referenced by r
	//++cr;		// error: cr - constant reference
	int x = cr;	// read object referenced by cr
}