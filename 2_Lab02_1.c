#include <stdio.h>
int main(){
    //숫자 입력받기
    int it;
    scanf("%d", &it); //for문 돌리고 scanf("%1d", 배열명[i])로 받으면 한방에 받기 가능

    //it 분리하기
    int num[5];
    for(int i=0; i<5; i++){
            num[i] = it % 10;
            it /= 10;
    }
            
    //5제곱
    int  a, b, c, d, e, result;    
    a = num[1]*num[1]*num[1]*num[1]*num[1];
    b = num[2]*num[2]*num[2]*num[2]*num[2];
    c = num[3]*num[3]*num[3]*num[3]*num[3];
    d = num[4]*num[4]*num[4]*num[4]*num[4];
    e = num[0]*num[0]*num[0]*num[0]*num[0];
    
    //다 더하기
    result = a+b+c+d+e;
    printf("%d", result);
    
    return 0;
}