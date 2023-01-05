#include<stdio.h>

int main()
{

	float age;

	printf("나이 : ");
	scanf_s("%f", &age);
	printf("초 : %0f초", 3.156*10e7* age);
}