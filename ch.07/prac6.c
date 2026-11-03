#include <stdio.h>

int main() {
    int i, j;
    char ch = 'a';
    int num = 1;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        for (j = 1; j <= 5 - i; j++) {
            printf("%d", num);
            if (j < 5 - i) {
                printf(" ");
            }
            num++;
        }
        printf("\n");
    }

    return 0;
}