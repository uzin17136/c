#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 0) {
        if (n % 2 == 0) {
            printf("Even Number\n");
        } else {
            printf("Odd Number\n");
        }
    } else {
        printf("Non positive\n");
    }

    return 0;
}