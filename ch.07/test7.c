#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    /* 윗부분: 1개 ~ n개, 왼쪽 정렬 */
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("#");
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    /* 아랫부분: n-1개 ~ 1개, 오른쪽 정렬 */
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("#");
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}