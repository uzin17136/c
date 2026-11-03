#include <stdio.h>

int main()
{
    int i = 10;
    int *p;

    p = &i;   //p에 i의 주소 저장

    printf("p = %p \n", p);
    printf("(*p)++= %d \n", (*p)++);    //후위 증감 연산으로 i의 값 출력 후 1증가
    printf("*p++= %d \n", *p++);    //p가 가리키는 값 출력 후 포인터 p 증가
    printf("p++= %p \n", p++);  //증가된 p의 주소 출력
    printf("(*p)+1=", p++);
    printf("*p+=1", p++);
    printf("(*p)+=1", p++);
    printf("*p=*p+1", p++);
    printf("++*p", p++);
    printf("++(*p)", p++);

    return 0;
}