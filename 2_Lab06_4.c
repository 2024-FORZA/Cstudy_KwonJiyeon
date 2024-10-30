#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int line = 1; // 현재 줄을 나타내는 변수
    int num = X;  // 남은 숫자 개수를 표현하는 변수

    // X가 현재 줄(line)보다 큰 경우 계속 줄을 넘어가며 num에서 빼줌
    while (num > line) {
        num -= line;
        line++;
    }

    int numerator, denominator;
    
    // 현재 줄(line)이 홀수 줄인 경우 분자가 감소하고 분모가 증가
    if (line % 2 == 1) {
        numerator = line - num + 1;
        denominator = num;
    }
    // 현재 줄(line)이 짝수 줄인 경우 분자가 증가하고 분모가 감소
    else {
        numerator = num;
        denominator = line - num + 1;
    }

    printf("%d/%d\n", numerator, denominator);
    
    return 0;
}//이건 생각해내기가 어렵다.... 일단 gpt의 도움 받았지만 분석 필요할듯
