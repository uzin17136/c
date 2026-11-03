#include <stdio.h>

int main() {
    int n;
    int cnt = 0;
    int sum = 0;

    scanf("%d", &n);
    while (n != 0) {
        cnt++;
        sum += n;
        scanf("%d", &n);
    }

    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", (double)sum / cnt);

    return 0;
}