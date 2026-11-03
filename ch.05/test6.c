#include <stdio.h>

int main() {
    int x = 50;         // 초기값
    scanf("%d", &x);    // [A] 이 줄에 커서가 있을 때 x 값 확인

    if (x >= 80) {
        x += 10;        // [B] 이 줄에 커서가 있을 때 x 값 확인
    } else {
        x -= 5;         // [B] 이 줄에 커서가 있을 때 x 값 확인
    }
    x--;                // [C] 이 줄에 커서가 있을 때 x 값 확인

    int A = 50;         // [A]에서 확인한 값으로 수정
    int B = 75;         // [B]에서 확인한 값으로 수정 (두 군데중 하나만 해당)
    int C = 70;         // [C]에서 확인한 값으로 수정

    printf("%d %d %d\n", A, B, C);
    return 0;
}