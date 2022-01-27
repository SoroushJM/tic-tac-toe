#include <iostream>
#include "Header.h"
using namespace std;
extern int Map[3][3];

void placer(short int n)
{

	switch (n)
	{
	case 1:
		Map[2][0] = XO_swicher();
		break;
	case 2:
		Map[2][1] = XO_swicher();
		break;
	case 3:
		Map[2][2] = XO_swicher();
		break;
	case 4:
		Map[1][0] = XO_swicher();
		break;
	case 5:
		Map[1][1] = XO_swicher();
		break;
	case 6:
		Map[1][2] = XO_swicher();
		break;
	case 7:
		Map[0][0] = XO_swicher();
		break;
	case 8:
		Map[0][1] = XO_swicher();
		break;
	case 9:
		Map[0][2] = XO_swicher();
		break;
	}
}
