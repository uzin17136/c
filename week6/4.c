#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++)
    {
        //공백 출력
        for(int j  =1; j <= 5-i; j++)
        {
            printf(" ");
        }

        //별 출력
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}