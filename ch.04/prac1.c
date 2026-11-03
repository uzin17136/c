#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);

    printf("%d\n", num);

    if (num > 10) {
        printf("Larger than 10.");
    }

    return 0;
}