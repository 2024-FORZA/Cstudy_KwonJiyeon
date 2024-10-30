#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int arr[1000];
    int index = 0;

    for (int i = 1; index < 1000; i++) {
        for (int j = 0; j < i && index < 1000; j++) {
            arr[index] = i;
            index++;
        }
    }

    int sum = 0;
    for (int k = A - 1; k < B; k++) {
        sum += arr[k];
    }

    printf("%d\n", sum);
    return 0;
}