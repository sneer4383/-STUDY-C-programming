#include <stdio.h>

int Max(int num1, int num2, int num3);
int Min(int num1, int num2, int num3);

int main(void)
{
    int num1, num2, num3;
    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Max=%d \n", Max(num1, num2, num3));
    printf("Min=%d \n", Min(num1, num2, num3));
    return 0;
}

int Max(int num1, int num2, int num3)
{
    if (num1 > num2)
        return (num1 > num3) ? num1 : num3;
    else
        return (num2 > num3) ? num2 : num3;
}

int Min(int num1, int num2, int num3)
{
    if (num1 < num2)
        return (num1 < num3) ? num1 : num3;
    else
        return (num2 < num3) ? num2 : num3;
}
