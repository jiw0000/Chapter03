#include<stdio.h>

int main()
{
	float quart;
	printf("물의 양(쿼트 단위로) : ");
	scanf_s("%f", &quart);
	printf("물 분자의 개수는 %d개이다", quart * 950 / 3.0e-23);
}