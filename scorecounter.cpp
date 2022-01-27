#include <iostream>
#include "Header.h"
using namespace std;
extern int Map[3][3];

void scorecounter(int o, int x)
{
	static int xHolder;
	static int oHolder;
	if (o == 1)
	{
		oHolder += 1;
	}
	else
	{
		xHolder += 1;
	}
	cout << "emtiyaz x : " << xHolder << " emtiyaz o : " << oHolder << endl;
}