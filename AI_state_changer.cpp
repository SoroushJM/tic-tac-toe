#include <iostream>
#include "Header.h"
using namespace std;
extern bool is_AI_on;

void AI_state_changer()
{
	cout << "mikhahid ke AI bhaton bazi konad?\ntype T ya t bara bale type F ya f bara khair:";
	char s[3];
	cin >> s;

	while(!(s[0] == 't' || s[0] == 'T' || s[0] == 'F' || s[0] == 'f'))
	{
		cout << "charter vared shode eshtebah ast dobare vared konid :";
		cin >> s;
	}
	if (s[0] == 't' || s[0] == 'T')
	{
		is_AI_on = true;
	}
}