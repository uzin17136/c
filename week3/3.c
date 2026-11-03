#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int num;

    printf("정수 하나를 입력하세요: ");
    scanf("%d"), &num;

    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}