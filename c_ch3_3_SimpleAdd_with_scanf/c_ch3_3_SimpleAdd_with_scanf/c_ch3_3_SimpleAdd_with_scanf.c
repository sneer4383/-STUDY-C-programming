#include <stdio.h>

int main(void)
{
    //1
    int result;
    int num1, num2;

    printf("���� one: ");
    scanf("%d", &num1); //ù��° ���� �Է�
    printf("���� two: ");
    scanf("%d", &num2); //�ι�° ���� �Է�

    result = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, result);

    //2
    int result2, num3, num4, num5;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d %d", &num3, &num4, &num5);
    result2 = num3 + num4 + num5;
    printf("%d + %d + %d = %d\n", num3, num4, num5, result2);

    return 0;
}