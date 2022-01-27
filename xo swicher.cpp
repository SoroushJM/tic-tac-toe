int XO_swicher(int n)//bein x va o swich mikonad 
// 1 bedin ta ba x shoro shavad bazi
// 2 bedin ta ba o shoro shavad bazi
{
	static short unsigned int move_counter = 0;
	if (n != 0)//bataye moshkhas kardan ba X shoro kardan Ya ba O
	{
		if (n == 1)//x
		{
			move_counter = 2;
		}
		else if (n == 2)//o
		{
			move_counter = 1;
		}
	}
	else
	{
		move_counter += 1;
		if (move_counter % 2 == 0)//O
		{
			return 2;
		}
		if (move_counter % 2 == 1)//x
		{
			return 1;
		}
	}
}