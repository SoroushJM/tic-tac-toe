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

	int random = rand() % 9 + 1;
	while (place_checker(random))
	{
		random = rand() % 9 + 1;
	}
	placer(random);
}