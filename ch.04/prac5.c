#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a >= 4 && b >= 4) {
        printf("WIN.\n");
    } else if (a >= 4 || b >= 4) {
        printf("DRAW.\n");
    } else {
        printf("LOSE.\n");
    }

    return 0;
}