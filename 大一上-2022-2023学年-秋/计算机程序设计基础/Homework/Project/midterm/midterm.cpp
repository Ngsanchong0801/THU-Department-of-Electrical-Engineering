#include <stdio.h>
#include <math.h>
int main ()
{
	int num,j;
	int m[5];
	j=0;
	num=0;

	scanf("%d",&num);

	while(num!=0)
	{
		m[j]=num%10;
		num=num/10;
		j++;
	}

	int k;

	for (k=j-1;k>=0;k--)
	{
		printf("%d\n",m[k]);
	}

	return 0;
}


