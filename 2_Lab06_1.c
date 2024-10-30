#include <stdio.h>

int howMany(int, int*);

int main(){
//if 1+6*n < 숫자 <= 1+6*(n+1) 면 n+1개 방을 지남
//근데 n>=0이니까 for에 n=0 박아서 n++돌리면 될듯
//근데 복잡하게 만들어보고싶어서 함수 처만들고 포인터까지 쓴 나.
    int num, go, answer, *it=&answer;
    scanf("%d", &num);
    go = howMany(num, it);
    if(!go) printf("%d", *it);
    
    return 0;
}

int howMany(int num, int *it){
    int i=1, range=1;
    if(num==1) {
        *it=1;
        return 0;
    }
    while (range < num) {
        range += 6 * i;
        i++;
    }
    
    *it = i;
    return 0;
}