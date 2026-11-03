#include <stdio.h>

int main() {
    int n, i;
    int cnt = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            cnt++;
        }
    }

    printf("Even numbers = %d\n", cnt);

    return 0;
}