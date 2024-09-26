#include <stdio.h>

int main() {
    int N, original, newN, count = 0;
    
    scanf("%d", &N);
    original = N;//원래 숫자 저장해놓기
    
    do {        
        int tens = N / 10; // 10의 자리
        int ones = N % 10; // 1의 자리
        int sum = tens + ones; // 두 자리 숫자의 자리 합
        
        newN = (ones * 10) + (sum % 10);
        N = newN;
        count++;

    } while (N != original);
    //while을 앞에 쓰면 count값이 얼마가 나오는지가 달라져버림
    //조건이 f면 아예 실행되지 않음
    
    printf("%d\n", count);
    
    return 0;
}
