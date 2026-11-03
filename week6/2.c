#include <stdio.h>

int main()
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //감소
    for(int i=3; i>=i; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}