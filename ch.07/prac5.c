#include <stdio.h>

int main() {
    int n, i, j;
    int num = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            if (j < i) {
                printf(" ");
            }
            num++;
        }
        printf("\n");
    }

    return 0;
}