#include<stdio.h>

int main(void)
{
	float i;
	printf("�ε��Ҽ��� ���� �Է��Ͻÿ� : ");
	scnaf_s("%f", &i);
	printf("�����Ҽ��� ǥ�� : %f\n", i);
	printf("���� ǥ�� : %e\n", i);
	printf("p ǥ�� : %a\n", i);

	return 0;

}