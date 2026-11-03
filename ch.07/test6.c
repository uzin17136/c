#include <stdio.h>

int main() {
    int n, i, j;
    int num = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j < i) {
                printf("  ");
            } else {
                printf("%d", num);
                num++;
                if (j < n) {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}