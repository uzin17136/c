#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int year;

    printf("연도를 입 력하세요 : ");
    scanf("%d", &year);

    if ((year %4 == 0 && year % 100 !=0) || year % 400 == 0){
        printf("윤년입니다\n");
    }
    else{
        printf("평년입니다\n");
    }
    return 0;
}