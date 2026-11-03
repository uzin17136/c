#include <stdio.h>

// 삽입 정렬 (Insertion Sort) 함수
// - 두 번째 원소부터 시작하여 앞의 원소들과 비교해 자신의 위치를 찾아 삽입하는 방식입니다.
void insertionSort(int arr[], int n) {
int i, j, key;

// 두 번째 원소(인덱스 1)부터 시작
for (i = 1; i < n; i++) {
    key = arr[i]; // 이번에 정렬할 기준이 되는 값 (현재 값)
    j = i - 1;    // 바로 앞 원소의 인덱스
    
    // 정렬된 앞부분을 뒤에서부터 거꾸로 탐색하며 key보다 큰 값을 오른쪽으로 한 칸씩 이동
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j]; // 요소를 오른쪽으로 이동
        j--;
    }
    
    // 반복문이 끝난 위치(key보다 작은 값 바로 다음)에 key를 삽입
    arr[j + 1] = key;
}


}

// 배열을 출력하는 함수
void printArray(int arr[], int size) {
for (int i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}

int main() {
int arr[] = {64, 25, 12, 22, 11};
int n = sizeof(arr) / sizeof(arr[0]);

printf("=== 삽입 정렬 (Insertion Sort) ===\n");
printf("정렬 전: ");
printArray(arr, n);

insertionSort(arr, n);

printf("정렬 후: ");
printArray(arr, n);

return 0;


}