#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long N;
    scanf("%llu", &N);  // 창문의 개수를 입력받음

    // N 이하의 제곱수 개수는 sqrt(N)와 같음
    unsigned long long result = (unsigned long long)sqrt(N);

    // 결과 출력
    printf("%llu\n", result);
    return 0;
}