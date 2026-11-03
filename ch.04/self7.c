#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch == 'A') {
        printf("Excellent\n");
    } else if (ch == 'B') {
        printf("Good\n");
    } else if (ch == 'C') {
        printf("Usually\n");
    } else {
        printf("error\n");
    }

    return 0;
}