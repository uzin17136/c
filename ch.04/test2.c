#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("zero\n");
    } else if (n > 0) {
        printf("plus\n");
    } else {
        printf("minus\n");
    }

    return 0;
}