#include <iostream>
#include "Header.h"
using namespace std;

void AI(short int xo)//x = 1 , O = 2
{

	static short int whtasAIplayingAgainst;
	if (xo == 0)
	{
		//cout << "Ai finisher :" << AI_finisher(whtasAIplayingAgainst) << endl;
		if (AI_finisher(whtasAIplayingAgainst) != -1)
		{
			placer(AI_finisher(whtasAIplayingAgainst));
			return;
		}


		if (AI_losing_side_checker(whtasAIplayingAgainst) != -1)
		{
			//cout << "AI losing side :" << AI_losing_side_checker(whtasAIplayingAgainst) << endl;
			placer(AI_losing_side_checker(whtasAIplayingAgainst));
			return;
		}


		AI_non_attack();
	}
	else
	{
		if (xo == 2)
		{
			whtasAIplayingAgainst = 1;
			return;
		}
		if (xo == 1)
		{
			whtasAIplayingAgainst = 2;
			return;
		}
	}

}