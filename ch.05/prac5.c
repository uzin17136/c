#include <stdio.h>

int main() {
    int n;
    int max = 1;    // 1~100 범위에서 가장 작은 값으로 시작
    int min = 100;  // 1~100 범위에서 가장 큰 값으로 시작

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n < 1 || n > 100) {
            continue;
        }

        if (n > max) {
            max = n;
        }
        if (n < min) {
            min = n;
        }
    }

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);

    return 0;
}