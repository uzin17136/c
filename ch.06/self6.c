#include <stdio.h>

int main() {
    int n, i, score;
    int sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &score);
        sum += score;
    }

    double avg = (double)sum / n;

    printf("avg : %.1f\n", avg);

    if (avg >= 80) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }

    return 0;
}