#include <stdio.h>

int main()
{
    float inch;

    printf("인치를 입력하십시오 : ");
    scanf_s("%f", &inch);


    printf("cm : %f", 2.54*inch );

}
