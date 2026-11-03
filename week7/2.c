#include <stdio.h>
void printValue(void*ptr, char type){
    switch (type) {
    case 'i':
        printf("%d\n",*(int*)ptr);  //void형 포인터를 int형 포인터로 형 변환하여 역참조
        break;
    case 'f':
        printf("%f\n",*(float*)ptr);    //void형 포인터를 float형 포인터로 형 변환하여 역참조
        break;
    case 'c':
        printf("%c\n",*(char*)ptr); //void형 포인터를 char형 포인터로 형 변환하여 역참조
        break;
    }
}

int main()
{
    int i = 23;
    float  f = 4.5;
    char c = 'z';

    printValue(&i, 'i');
    printValue(&f, 'f');
    printValue(&c, 'c');

    return 0;
}