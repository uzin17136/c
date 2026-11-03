#include <stdio.h>

int main() {
    int a, b, i, j;
    scanf("%d %d", &a, &b);

    for (i = 1; i <= 9; i++) {
        if (a >= b) {
            for (j = a; j >= b; j--) {
                printf("%d * %d = %2d   ", j, i, j * i);
            }
        } else {
            for (j = a; j <= b; j++) {
                printf("%d * %d = %2d   ", j, i, j * i);
            }
        }
        printf("\n");
    }

    return 0;
}