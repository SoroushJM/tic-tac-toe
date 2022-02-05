#include <iostream>
#include "Header.h"
using namespace std;
extern int Map[3][3];


bool End_game_checker()
{
	if (1 == Map[0][0] && 1 == Map[0][1] && 1 == Map[0][2])//satr aval x
	{
		cout << "x barande shod\n";
		scorecounter(0, 1);
		return true;
	}
	else if (2 == Map[0][0] && 2 == Map[0][1] && 2 == Map[0][2])//satr aval y
	{
		cout << "o barande shod\n";
		scorecounter(1, 0);
		return true;
	}
	else if (1 == Map[1][0] && 1 == Map[1][1] && 1 == Map[1][2])//satr 2 x
	{
		cout << "x barande shod\n";
		scorecounter(0, 1);
		return true;
	}
	else if (2 == Map[1][0] && 2 == Map[1][1] && 2 == Map[1][2])//satr 2 y
	{
		cout << "o barande shod\n";
		scorecounter(1, 0);
		return true;
	}
	else if (1 == Map[2][0] && 1 == Map[2][1] && 1 == Map[2][2])//satr 3 x
	{
		cout << "x barande shod\n";
		scorecounter(0, 1);
		return true;
	}
	else if (2 == Map[2][0] && 2 == Map[2][1] && 2 == Map[2][2])//satr 3 y
	{
		cout << "o barande shod\n";
		scorecounter(1, 0);
		return true;
	}
	//******************************************************************
	else if (1 == Map[2][0] && 1 == Map[1][0] && 1 == Map[0][0])//ston 1 x
	{
		cout << "x barande shod\n";
		scorecounter(0, 1);
		return true;
	}
	else if (2 == Map[2][0] && 2 == Map[1][0] && 2 == Map[0][0])//ston 1 y
	{
		cout << "o barande shod\n";
		scorecounter(1, 0);
		return true;
	}
	else if (1 == Map[2][1] && 1 == Map[1][1] && 1 == Map[0][1])//ston 2 x
	{
		cout << "x barande shod\n";
		scorecounter(0, 1);
		return true;
	}
	else if (2 == Map[2][1] && 2 == Map[1][1] && 2 == Map[0][1])//ston 2 y
	{
		cout << "o barande shod\n";
		scorecounter(1, 0);
		return true;
	}
	else if (1 == Map[2][2] && 1 == Map[1][2] && 1 == Map[0][2])//ston 3 x
	{
		cout << "x barande shod\n";
		scorecounter(0, 1);
		return true;
	}
	else if (2 == Map[2][2] && 2 == Map[1][2] && 2 == Map[0][2])//ston 3 y
	{
		cout << "o barande shod\n";
		scorecounter(1, 0);
		return true;
	}
	//###############################################################
	else if (1 == Map[0][2] && 1 == Map[1][1] && 1 == Map[2][0])// movarb/ x
	{
		cout << "x barande shod\n";
		scorecounter(0, 1);
		return true;
	}
	else if (2 == Map[0][2] && 2 == Map[1][1] && 2 == Map[2][0])// movarb/ y
	{
		cout << "o barande shod\n";
		scorecounter(1, 0);
		return true;
	}
	else if (1 == Map[0][0] && 1 == Map[1][1] && 1 == Map[2][2])// movarb\ x
	{
		cout << "x barande shod\n";
		scorecounter(0, 1);
		return true;
	}
	else if (2 == Map[0][0] && 2 == Map[1][1] && 2 == Map[2][2])// movarb\ y
	{
		cout << "o barande shod\n";
		scorecounter(1, 0);
		return true;
	}
	else if (Map[0][0] != 0 && Map[0][1] != 0 && Map[0][2] != 0
		  && Map[1][0] != 0 && Map[1][1] != 0 && Map[1][2] != 0
		  && Map[2][0] != 0 && Map[2][1] != 0 && Map[2][2] != 0)
	{
		cout << "bazi mosavi shode\n";
		return true;
	}
		
	return false;
}