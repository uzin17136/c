#include <stdio.h>

int main() {
    int n, i, j;
    char ch = 'A';
    int num = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j <= n - i + 1) {
                printf("%c", ch);
                ch++;
            } else {
                printf("%d", num);
                num++;
            }
            if (j < n) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}