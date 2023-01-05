#include<stdio.h>

int main(void)
{
	float i;
	printf("부동소수점 수를 입력하시오 : ");
	scnaf_s("%f", &i);
	printf("고정소수점 표기 : %f\n", i);
	printf("지수 표기 : %e\n", i);
	printf("p 표기 : %a\n", i);

	return 0;

}