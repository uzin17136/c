#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n > 0) {
            printf("positive number\n");
        } else {
            printf("negative number\n");
        }
    }

    return 0;
}