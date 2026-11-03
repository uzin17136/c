#include <stdio.h>

int main() {
    double gpa;
    scanf("%lf", &gpa);

    if (gpa >= 4.0) {
        printf("scholarship\n");
    } else if (gpa >= 3.0) {
        printf("next semester\n");
    } else if (gpa >= 2.0) {
        printf("seasonal semester\n");
    } else {
        printf("retake\n");
    }

    return 0;
}