#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if (score >= 80) {
        printf("Passed.\n");
    } else {
        printf("Failed.\n");
    }

    return 0;
}