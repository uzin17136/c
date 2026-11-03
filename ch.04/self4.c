#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 90) {
        printf("Excellent\n");
    } else if (n >= 80) {
        printf("Good\n");
    } else if (n >= 70) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}