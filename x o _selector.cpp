#include <iostream>
#include "Header.h"
using namespace std;


void XO_selector()//entekhab mikonad aval bazi ke ba x shoro shavd ya o
{
	char XO[2] = { 0,0 };
	cout << "lotfan entekhab konid ke mikhahid X bashin ya O :";
	cin >> XO[0];
	while (!((XO[0] == 'x') || (XO[0] == 'X') || (XO[0] == 'o') || (XO[0] == 'O')))
	{
		cout << "character vared shode eshtebah ast. x ya o ra vared konid :";
		cin >> XO[0];
	}
	if (XO[0] == 'X' || XO[0] == 'x')
	{
		XO_swicher(1);
		AI(2);
	}
	if (XO[0] == 'O' || XO[0] == 'o')
	{
		XO_swicher(2);
		AI(1);
	}
}
