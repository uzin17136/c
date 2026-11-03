#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);

    for (i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            printf("%d", i * j);
            if (j < c) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}