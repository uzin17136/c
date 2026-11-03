#include <stdio.h>

int main() {
    int sel;

    while (1) {
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number: ");
        scanf("%d", &sel);

        printf("\n");

        if (sel == 1) {
            printf("You selected Input.\n");
        } else if (sel == 2) {
            printf("You selected Output.\n");
        } else if (sel == 3) {
            printf("You selected Delete.\n");
        } else if (sel == 4) {
            printf("You selected Finish.\n");
            break;
        } else {
            printf("Wrong input.\n");
        }

        printf("\n");
    }

    return 0;
}