#include <stdio.h>

int main() {
    int sel;

    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");

    scanf("%d", &sel);

    if (sel == 1) {
        printf("You selected ADD.\n");
    } else if (sel == 2) {
        printf("You selected EDIT.\n");
    } else if (sel == 3) {
        printf("You selected DEL.\n");
    } else {
        printf("Wrong choice.\n");
    }

    return 0;
}