#include <iostream>
#include "Header.h"
using namespace std;
extern int Map[3][3];

bool place_checker(int n)//return true if the place was filled
{

	switch (n)
	{
	case 1:
		if (Map[2][0] != 0)
			return true;
		break;

	case 2:
		if (Map[2][1] != 0)
			return true;
		break;

	case 3:
		if (Map[2][2] != 0)
			return true;
		break;

	case 4:
		if (Map[1][0] != 0)
			return true;
		break;

	case 5:
		if (Map[1][1] != 0)
			return true;
		break;

	case 6:
		if (Map[1][2] != 0)
			return true;
		break;

	case 7:
		if (Map[0][0] != 0)
			return true;
		break;

	case 8:
		if (Map[0][1] != 0)
			return true;
		break;

	case 9:
		if (Map[0][2] != 0)
			return true;
		break;

	}
	return false;
}