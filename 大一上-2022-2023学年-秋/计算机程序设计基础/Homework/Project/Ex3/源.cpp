#include <stdio.h>
#include <math.h>\

#define Pi 3.1415926
int main ()
{
	//��r=1.5, h=2
	float r, h, S, V ;
		//r=1.5;
		//h=2;

		//S = Pi * r * r + 2 * Pi * r * h;

		//V = Pi * r * r * h; 

			printf("��W�����n�O%.2f\n��W����n�O%.2f\n",S,V);

	//��r�Mh���ۦ��J���ƭ�
	scanf("�п�Jr���ƭ�: %f",&r);
	scanf("�п�Jh���ƭ�: %f",&h);

		S = Pi * r * r + 2 * Pi * r * h;

		V = Pi * r * r * h; 

		printf("��W�����n�O%.2f\n��W����n�O%.2f\n",S,V);
	return 0;
}