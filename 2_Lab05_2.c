#include <stdio.h>

int is_palindrome(int number) {
    int reversed = 0, original = number;

    // 숫자를 뒤집기
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    // 원래 숫자와 뒤집은 숫자가 같은지 비교
    return original == reversed;
}

int main() {
    int number;

    while (1) {
        scanf("%d", &number);
        if (number == 0) {
            break; // 0이 입력되면 종료
        }

        if (is_palindrome(number)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
