#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0) {
        printf("All Positive\n");
    } else if (a == 0 || b == 0 || c == 0) {
        printf("Contain Zero\n");
    } else {
        printf("Mixed\n");
    }

    return 0;
}