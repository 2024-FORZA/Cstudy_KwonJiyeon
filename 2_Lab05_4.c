#include <stdio.h>

int main() {
    long long N;
    long long seconds = 0; // 총 걸린 시간

    // 입력 받기
    scanf("%lld", &N);

    // 현재 불러야 할 숫자
    for (int i = 1; N > 0; i++) {
        if (i <= N) {
            N -= i; // 현재 부른 숫자만큼 새가 날아감
            seconds++; // 부른 숫자 카운트
        } else {
            // 부른 숫자가 현재 새보다 많으면 다시 1부터 시작
            i = 0; // 다음 반복에서 i를 1로 설정하기 위해
        }
    }

    // 결과 출력
    printf("%lld\n", seconds);
    return 0;
}
