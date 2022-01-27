#include <iostream>
#include "Header.h"
using namespace std;
extern int Map[3][3];

void print()
{
	system("cls");
	for (int sater = 0; sater < 3; sater++)
	{
		for (int ston = 0; ston < 3; ston++)
		{
			cout << ' ';
			char_converter(Map[sater][ston]);
			cout << ' ';
			if (ston < 2)
			{
				cout << "#";
			}
		}

		cout << "\n";

		if (sater == 0 || sater == 1)
		{
			cout << "############\n";
		}
	}
}