#include <stdio.h>

int main() {
    int C;  // 테스트 케이스 개수
    scanf("%d", &C);

    while (C--) {
        int N;
        scanf("%d", &N);  // 학생 수

        int scores[N];
        int sum = 0;

        // 점수 입력 및 합계 계산
        for (int i = 0; i < N; i++) {
            scanf("%d", &scores[i]);
            sum += scores[i];
        }

        // 평균 계산
        double average = (double)sum / N;

        // 평균을 넘는 학생 수 계산
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (scores[i] > average) {
                count++;
            }
        }

        // 비율 계산 및 출력
        double ratio = (double)count / N * 100;
        printf("%.3lf%%\n", ratio);  // 소수점 셋째 자리까지 출력
    }

    return 0;
}