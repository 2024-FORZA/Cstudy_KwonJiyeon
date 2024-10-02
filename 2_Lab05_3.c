#include <stdio.h>

int main() {
    int N, M;
    int cards[100];
    int max_sum = 0;

    // 입력 받기
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%d", &cards[i]);
    }

    // 3장의 카드를 선택하여 합 계산
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                
                // M을 초과하지 않고, 최대 합을 갱신
                if (sum <= M && sum > max_sum) {
                    max_sum = sum;
                }
            }
        }
    }

    // 결과 출력
    printf("%d\n", max_sum);
    return 0;
}
