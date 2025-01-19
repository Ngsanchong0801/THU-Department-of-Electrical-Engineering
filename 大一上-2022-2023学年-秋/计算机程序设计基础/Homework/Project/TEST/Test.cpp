#include <stdio.h>
int main ()
{
	char a = 'P';
	char b = 'R';
	int win;
	win = 0;

	//甲出石頭
	if((a == 'R') && (b=='s'))
		win = win + 1;
	else if ((a == 'R') && (b=='P'))
		win = win;
	else if ((a == 'R') && (b=='R'))
		win = win;
	//甲出剪刀
	else if((a == 'S') && (b=='S'))
		win = win;
	else if ((a == 'S') && (b=='P'))
		win = win + 1;
	else if ((a == 'S') && (b=='R'))
		win = win;
	//甲出布
	else if((a == 'P') && (b=='S'))
		win = win;
	else if ((a == 'P') && (b=='P'))
		win = win;
	else if ((a == 'P') && (b=='R'))
		win = win + 1;

	printf("%d",win);
	return 0;
}