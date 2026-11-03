#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int sum = 0;

    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("%d\n", sum);

    return 0;
}