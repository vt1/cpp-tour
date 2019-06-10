#include "../header/Distance.h"

int main()
{
	const Distance football(300, 0);
	//football.getdist();	// err, getdist() is not constant func
	football.showdist();
	return 0;
}