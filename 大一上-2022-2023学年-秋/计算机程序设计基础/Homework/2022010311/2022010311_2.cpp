#include <stdio.h>
#include <string.h>
int main()
{
	char in[2049]="";
	char out[2049]="";
	void func(char* in, char* out);
	printf("�п�J�ݭn�B�z���r�Ŧ�:");
	scanf("%s",in);

	func(in,out);

	printf("�B�z�᪺�r�Ŧꬰ:%s",out);
	return 0;
}

void func(char* in, char* out)
{
	int i,j,length;
	i=0;
	j=0;
	length=0;

	length=strlen(in);

	for(i=0;i<length;i++)
	{
		if (in[i]%2==0)
		{
			out[j]=in[i];
			j++;
		}
	}

}