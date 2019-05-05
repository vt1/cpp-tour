void f(const int* p);
void fn(int*);

int main()
{
	/*----------
	CONSTANT FUNCTION ARGS
	----------*/
	int i = 17;
	f(&i);

	/*---------
	NON-CONSTANT FUNCTION ARGS
	----------*/
	const int* p = &i;
	const int j = 29;
	fn(&i);			//ok, i - not const;
	fn(p);			//err
	fn(&j);			//err, j is const
}

void f(const int* p)
{
	//*p = 17;		//err
	int i = 29;
	p = &i;			//ok but why
}