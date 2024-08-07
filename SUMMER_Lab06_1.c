#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int divisors[50];
    for (int i = 0; i < num; i++) {
        scanf("%d", &divisors[i]);
    }

    int min = divisors[0];
    int max = divisors[0];
    for (int i = 1; i < num; i++) {
        if (divisors[i] < min) {
            min = divisors[i];
        }
        if (divisors[i] > max) {
            max = divisors[i];
        }
    }

    int N = min * max;
    printf("%d\n", N);

    return 0;
}
