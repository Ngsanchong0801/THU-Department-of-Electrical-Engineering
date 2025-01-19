#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	double cal ( double t, double K, double B, double a);
	FILE *fp1,*fp2;
	fp1=fopen("param.txt","r");
	fp2=fopen("curve.txt","w+");

	if (fp1==NULL || fp2==NULL)
	{
		printf("This file could not be opened!\n");
		exit(0);
	}

	double K,B,a,t;
	t=0.0;
	K=0.0;
	B=0.0;
	a=0.0;

	char str[1000];
	double m=0;
	int i =0;

	while (!feof(fp1))
	{
		fgets(str,100,fp1);
		//m=atof(str);
		//K=atof(str);
		//fscanf(fp1,"K=%lf",&K);
		//fscanf(fp1,"B=%lf",&B);
		//fscanf(fp1,"a=%lf",&a);
	}
	//printf("%lf",&m);

	for (t=0.0;t<=0.2;t=t+0.001)
	{
		fprintf(fp2,"%6.3lf   %6.3lf\n",t,cal(t,3,150,50));
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}

double cal ( double t, double K, double B, double a)
{
	double result1,result2,last;
	last=0;
	result1=0;
	result2=0;

	result1=(K+B*t);
	result2=exp(-a*t);
	last=result1*result2;

	return last;
}