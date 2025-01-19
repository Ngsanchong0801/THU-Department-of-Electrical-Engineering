#include <stdio.h>
int main()
{
	int cal(int a, int b,int c,int d);
	int a,b,c,d,sum;
	sum=0;
	a=1;
	b=1;
	c=1;
	d=1;

	for (a=1;a<=8;a++)
	{
		for (b=1;b<=9;b++)
		{
			for (c=1;c<=9;c++)
			{
				for (d=1;d<=9;d++)
				{
					sum=cal(a,b,c,d);
					printf("%6d     A=%d  B=%d  C=%d  D=%d\n",sum,a,b,c,d);
				}
			}
		}
	}
	return 0;
}

int cal(int a, int b,int c,int d)
{
	int result;
	result = (a+b+c+d)+(10*a+10*b+10*c)+100*(a+b)+1000*a;
	if (result<=9999)
	{
		return result;
	}
	else
	{
		return 0;
	}
}