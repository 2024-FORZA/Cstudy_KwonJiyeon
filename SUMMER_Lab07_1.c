#include <stdio.h>
#include <string.h>

int main() {
    int Test;
    scanf("%d", &Test);

    for (int i = 0; i < Test; i++) {
        int Repeat;
        char S[21];
        scanf("%d %s", &Repeat, S);

        int len = strlen(S);

        for (int j = 0; j < len; j++) {
            for (int k = 0; k < Repeat; k++) {
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
