#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    scanf("%d", &n);

    for (i = 5; i <= n; i += 5) {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}