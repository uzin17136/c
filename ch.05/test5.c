#include <stdio.h>

int main() {
    double base, height;
    char ch;

    while (1) {
        scanf("%lf %lf", &base, &height);
        printf("Triangle area = %.1f\n", base * height / 2);

        printf("Continue? ");
        scanf(" %c", &ch);

        if (ch != 'Y' && ch != 'y') {
            break;
        }
    }

    return 0;
}