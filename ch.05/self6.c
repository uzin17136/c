#include <stdio.h>

int main() {
    int sel;

    while (1) {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? ");
        scanf("%d", &sel);

        printf("\n");

        if (sel == 1) {
            printf("Seoul\n");
        } else if (sel == 2) {
            printf("Washington\n");
        } else if (sel == 3) {
            printf("Tokyo\n");
        } else if (sel == 4) {
            printf("Beijing\n");
        } else {
            printf("none\n");
            break;
        }

        printf("\n");
    }

    return 0;
}