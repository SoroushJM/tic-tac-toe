#include <iostream>
#include "Header.h"
using namespace std;

int place_getter()
{
	short int n;
	cout << "lotfan shomare khane ra entekhab konid :";
	cin >> n;
	while (place_checker(n))
	{
		cout << "makan entekhab shode eshkal shode ast te makan dige entekhab konid :";
		cin >> n;
	}
	return n;
}