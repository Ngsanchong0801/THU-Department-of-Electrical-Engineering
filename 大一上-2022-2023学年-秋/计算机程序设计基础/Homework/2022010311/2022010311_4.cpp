#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp1,*fp2,*fp3,*fp4;
	fp1=fopen("name.txt","r");
	fp2=fopen("s1.txt","r");
	fp3=fopen("s2.txt","r");
	fp4=fopen("board.txt","w+");

	if (fp1==NULL || fp2==NULL || fp3==NULL || fp4==NULL)
	{
		printf("This file could not be opened!\n");
		exit(0);
	}
	struct StuInfo
	{
		char name[400];
		int num;
		int step1;
		int step2;
		int total;
	};




	return 0;
}