#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &scores[i]);
    }

    double max = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (scores[i] / max) * 100;
    }

    double new_average = sum / n;

    printf("%.6f\n", new_average);

    return 0;
}
//double 대신 float도 가능하지만 정확도 조금 떨어질 수 있음
//하지만 두 경우 모두 맞게 처리됨