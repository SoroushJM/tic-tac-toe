#include <iostream>
#include "Header.h"
using namespace std;

int place_getter()
{
	short int n;
	cout << "lotfan shomare khane ra entekhab konid :";
	cin >> n;
	while (!(n <= 9 && n >= 1))
	{
		cout << "makan entekhab shode eshtebah ast lotfan dobare makane khodra vared konid :";
		cin.clear();
		cin >> n;
	}
	while (place_checker(n))
	{
		cout << "makan entekhab shode eshkal shode ast te makan dige entekhab konid :";
		cin >> n;
	}
	return n;
}