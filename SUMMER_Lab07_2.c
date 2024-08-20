#include <stdio.h>
#include <string.h>

int main() {
    char S[101]; 
    int alphabet[26];

    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }

    scanf("%s", S);

    for (int i = 0; i < strlen(S); i++) {
        int index = S[i] - 'a';
        if (alphabet[index] == -1) {
            alphabet[index] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }

    printf("\n");

    return 0;
}
