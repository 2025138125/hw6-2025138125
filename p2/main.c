#include <stdio.h>

int main() {
    int n=0;
    int arr1[20], arr2[20]; // 최대 20개의 정수를 담을 수 있는 배열 선언
    
    int *p1 = arr1;
    int *p2 = arr2; //포인터 선언

    scanf("%d", &n); //n받기

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]); //배열1에 숫자 채우기
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]); //배열2에 숫자 채우기
    }

    for (int i = 0; i < n; i++) {
        int sum = *(p1 + i) + *(p2 + n - 1 - i); //배열 1은 정방향 배열2는 역방향으로 더하기
        
        printf(" %d", sum); //문제 조건 맞추기
    }
    return 0;
}
