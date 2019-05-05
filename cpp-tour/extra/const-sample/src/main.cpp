int main()
{
	//CONST
	const int j = 17;
	j = 29;					//err
	const int i;			//err, must init

	/*--------
	POINTER TO CONSTANT
	the address in the pointer may change, but the contents of the memory at this address are not
	---------*/
	const int* p;
	int i = 17;
	p = &i;					//ok
	*p = 29;				//err

	/*-------
	CONSTANT POINTER
	adress cannot be changed, but the value's stored in the memory at this adress can
	-------*/
	int i = 17;
	int j = 29;
	int* const p;			//err, must init
	int* const p1 = &i;		//ok
	*p1 = 29;				//ok, the value referred to by the pointer may change
	p1 = &j;				//err

	/*--------
	CONSTANT POINTER TO CONSTANT
	adress and value cannot be changed
	--------*/
	int i = 17;
	int j = 29;
	const int* const p;			//err, must init
	const int* const p1 = &i;	//ok
	*p1 = 29;					//err
	p1 = &j;					//err
}