#include <iostream>
#include "Header.h"
extern int Map[3][3];

void AI_non_attack()
{
	static short int runCounter = 0;
	runCounter++;
	if (runCounter == 1)
	{
		srand(time(NULL));//for random number generator
	}
	if (Map[0][0] != 0 &&
		Map[0][1] != 0 &&
		Map[0][2] != 0 &&
		Map[1][0] != 0 &&
		Map[1][1] != 0 &&
		Map[1][2] != 0 &&
		Map[2][0] != 0 &&
		Map[2][1] != 0 &&
		Map[2][2] != 0) 
	{
		return;
	}

	int random = rand() % 9 + 1;
	while (place_checker(random))
	{
		random = rand() % 9 + 1;
	}
	placer(random);
}