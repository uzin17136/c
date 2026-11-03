#include <stdio.h>

int main() {
    int a, b, i;
    int cnt = 0;
    int sum = 0;

    scanf("%d %d", &a, &b);

    int small = (a < b) ? a : b;
    int large = (a < b) ? b : a;

    for (i = small; i <= large; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            cnt++;
            sum += i;
        }
    }

    printf("sum : %d\n", sum);
    if (cnt > 0) {
        printf("avg : %.1f\n", (double)sum / cnt);
    } else {
        printf("avg : 0.0\n");
    }

    return 0;
}