#include <stdio.h>

// 선택 정렬 (Selection Sort) 함수
// - 전체 원소 중 가장 작은 원소를 찾아 맨 앞의 원소와 교환하는 방식입니다.
void selectionSort(int arr[], int n) {
int i, j, min_idx, temp;

// 배열의 끝에서 두 번째 원소까지 반복
for (i = 0; i < n - 1; i++) {
    // 현재 위치(i)를 가장 작은 값의 인덱스로 가정
    min_idx = i;
    
    // 아직 정렬되지 않은 나머지 원소들과 비교
    for (j = i + 1; j < n; j++) {
        if (arr[j] < arr[min_idx]) {
            min_idx = j; // 더 작은 값을 발견하면 최소값 인덱스 갱신
        }
    }
    
    // 최소값이 현재 위치(i)가 아니라면 두 원소의 자리를 교환 (Swap)
    if (min_idx != i) {
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
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

printf("=== 선택 정렬 (Selection Sort) ===\n");
printf("정렬 전: ");
printArray(arr, n);

selectionSort(arr, n);

printf("정렬 후: ");
printArray(arr, n);

return 0;


}