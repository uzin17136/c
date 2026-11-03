#include <stdio.h>

int main() {
    int score, i;
    int sum = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &score);
        sum += score;
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / 5);

    return 0;
}