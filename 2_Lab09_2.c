#include <stdio.h>

// 팩토리얼을 계산하는 함수
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    // 이항 계수 계산
    int binomial = factorial(N) / (factorial(K) * factorial(N - K));

    // 결과 출력
    printf("%d\n", binomial);
    return 0;
}