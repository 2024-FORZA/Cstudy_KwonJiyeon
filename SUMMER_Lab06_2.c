#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);

    int ballPosition = 1;

    for (int i = 0; i < M; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (ballPosition == X) {
            ballPosition = Y;
        } else if (ballPosition == Y) {
            ballPosition = X;
        }
    }

    printf("%d\n", ballPosition);
    
    return 0;
}