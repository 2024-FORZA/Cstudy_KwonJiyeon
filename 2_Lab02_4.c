#include <stdio.h>

// 소수 판별 함수
int is_prime(int num) {
    if (num < 2) return 0; // 1은 소수가 아님
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // num이 i로 나누어지면 소수가 아님
    }
    return 1; // 소수인 경우
}

int main() {
    int N;
    scanf("%d", &N); // 수의 개수 입력

    int count = 0; // 소수의 개수 세는 변수
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num); // 수 입력
        if (is_prime(num)) {
            count++; // 소수이면 카운트 증가
        }
    }

    printf("%d\n", count); // 소수의 개수 출력

    return 0;
}
