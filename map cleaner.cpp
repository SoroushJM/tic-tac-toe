#include <iostream>
#include "Header.h"
using namespace std;
extern int Map[3][3];

void map_cleaner() //to clean up map!
{
	for (int satr = 0; satr < 3; satr++)
	{
		for (int ston = 0; ston < 3; ston++)
		{
			Map[satr][ston] = 0;
		}
	}
}