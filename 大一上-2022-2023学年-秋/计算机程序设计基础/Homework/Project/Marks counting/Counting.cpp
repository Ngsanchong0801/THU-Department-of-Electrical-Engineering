#include <stdio.h>
int main()
{
	double hw,mid,fina,pre1,pre2,pre3,result;
	hw=0;
	mid=0;
	fina=0;
	pre1=0;
	pre2=0;
	pre3=0;
	result=0;

	printf("��J�\�Ҥ��ƩM�ʤ���(�p�ƧΦ�):\n");
	scanf("%lf %lf",&hw,&pre1);
	printf("��J�������ƩM�ʤ���(�p�ƧΦ�):\n");
	scanf("%lf %lf",&mid,&pre2);
	printf("��J�������ƩM�ʤ���(�p�ƧΦ�):\n");
	scanf("%lf %lf",&fina,&pre3);

	result=(hw*pre1)+(mid*pre2)+(fina*pre3);
	printf("�`���Z�O:%.2lf\n",result);





	return 0;
}