#include <iostream>
#include "Header.h"
using namespace std;

extern int Map[3][3];

int AI_finisher(short int xo) //return -1 if ai there is anything fo finsih off
{
	if (xo == 1)
		xo = 2;
	else if (xo == 2)
		xo = 1;
	

	for (int satr = 0; satr <= 2; satr++)//satr check kon
	{
		if (Map[satr][0] == xo && Map[satr][1] == xo && Map[satr][2] == 0)//xx0
		{
			return 9 - satr * 3;
		}
		if (Map[satr][0] == xo && Map[satr][2] == xo && Map[satr][1] == 0)//x0x
		{
			return 8 - satr * 3;
		}
		if (Map[satr][1] == xo && Map[satr][2] == xo && Map[satr][1] == 0)//0xx
		{
			return 7 - satr * 3;
		}
	}
	for (int soton = 0; soton <= 2; soton++)
	{
		if (Map[0][soton] == xo && Map[1][soton] == xo && Map[2][soton] == 0)//x           
		{                                                                    //x               
			return 1 + soton;                                                //o
		}
		if (Map[0][soton] == xo && Map[2][soton] == xo && Map[1][soton] == 0)//x           
		{                                                                    //o               
			return 4 + soton;                                                //x
		}
		if (Map[1][soton] == xo && Map[2][soton] == xo && Map[0][soton] == 0)//o           
		{                                                                    //x               
			return 7 + soton;                                                //x
		}
	}
	if (Map[0][0] == xo && Map[1][1] == xo && Map[2][2] == 0)            //ghoter asli
	{
		return 3;
	}
	if (Map[0][0] == xo && Map[2][2] == xo && Map[1][1] == 0)         //ghoter asli
	{
		return 5;
	}
	if (Map[1][1] == xo && Map[2][2] == xo && Map[0][0] == 0)         //ghoter asli
	{
		return 7;
	}
	if (Map[0][2] == xo && Map[1][1] == xo && Map[2][0] == 0)         //ghoter fareei
	{
		return 1;
	}
	if (Map[0][2] == xo && Map[2][0] == xo && Map[1][1] == 0)         //ghoter fareei
	{
		return 5;
	}
	if (Map[1][1] == xo && Map[2][0] == xo && Map[0][2] == 0)         //ghoter fareei
	{
		return 9;
	}
	return -1;
}