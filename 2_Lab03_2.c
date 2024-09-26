#include <stdio.h>

int gcd(int, int);

int main(){
    //두 개의 자연수 입력받기
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", gcd(a, b));
    printf("%d\n", a*b/gcd(a, b)); //최소공배수 : 두 수의 곱/최대공약수
    
    return 0;
}


int gcd(int a, int b) {// gcd(int a. int b){ return b ? gcd(b, a%b) : a}
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
    //최대공약수? "유클리드 호제법"
    //두 개의 자연수 a, b에 대해 a를 b로 나눈 나머지를 r이라 하면(a>b)
    //a와 b의 최대공약수는 b와 r의 최대공약수와 같다
    //따라서 b를 r로 나눈 나머지 r'을 구하고 
    //다시 r을 r'로 나눈 나머지를 구하는 과정을 반복하여
    //나머지가 0이 되었을 때 나누는 수가 a와 b의 최대공약수이다
}    