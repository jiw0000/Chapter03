#include<stdio.h>

int main()
{
    float cups, pint, ounces, tablespoons, teaspoons;

    printf("cups를 입력하십시오 : ");
    scanf_s("%f", &cups);

    printf("pint = %f\n", cups / 2);
    printf("ounces : %f\n", cups * 8);
    printf("tablespoons : %f\n", cups * 8 * 2);
    printf("teaspoons : %f\n", cups * 8 * 2 * 3);

}