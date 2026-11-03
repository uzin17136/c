#include <stdio.h>

int main() {
    int n, i, j;
    int num = 1;
    char ch = 'A';
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1 - i; j++) {
            printf("%d ", num);
            num++;
        }
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            if (j < i) {
                printf(" ");
            }
            ch++;
        }
        printf("\n");
    }

    return 0;
}