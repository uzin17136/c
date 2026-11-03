#include <stdio.h>

int main() {
    int height, weight;
    scanf("%d %d", &height, &weight);

    int bmi = weight + 100 - height;
    printf("%d\n", bmi);

    if (bmi > 0) {
        printf("Obesity\n");
        printf("Need control\n");
    }

    return 0;
}