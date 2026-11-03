#include <stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);

    int small = (a < b) ? a : b;
    int large = (a < b) ? b : a;

    for (i = small; i <= large; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}