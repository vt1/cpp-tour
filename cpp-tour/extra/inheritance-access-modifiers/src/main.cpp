#include "../header/A.h"
#include "../header/B.h"
#include "../header/C.h"

int main()
{
	int a;
	B objB;
	a = objB.publicDataA;
	a = objB.protectedDataA;	// err
	a = objB.privateDataA;		// err

	C objC;
	a = objC.publicDataA;		// err
	a = objC.protectedDataA;	// err
	a = objC.privateDataA;		// err

	return 0;
}