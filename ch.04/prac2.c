#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);

    printf("Input value : %d\n", num);

    if (num > 0) {
        printf("Positive number");
    }

    return 0;
}