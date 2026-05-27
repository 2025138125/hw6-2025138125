#include <stdio.h>

int main() {
    char arr[10]; // 10개의 문자를 담을 배열 
    int count =0; //숫자세기
    
    for (int i = 0; i < 10; i++) {
        scanf("%c", &arr[i]); //배열 만들기
    }

    int max_count = 0; // 가장 많이 나온 횟수
    char many;     // 가장 많이 나온 문자

   for (char *p = arr; p < arr + 10; p++) {
        for (char *q = arr ; q < arr + 10; q++) {
            if (*p==*q) {
                count++; // 똑같은 문자를 발견할 때마다 카운트 증가
            }
        }
            if (count > max_count) {
            max_count = count;
            many = *p; // count가 맥스보다 크면 그 문자와 count수 저장
            }
        
        count=0; //count 0으로 초기화
   }

    printf("%c %d\n", many, max_count); //출력

    return 0;
}
