#include<iostream>
using namespace std;

void char_converter(int n)
{
	switch (n)
	{
	case 0:
		cout << ' ';
		break;
	case 1:
		cout << 'X';
		break;
	case 2:
		cout << 'O';
		break;
	}
}