#include <stdio.h>
#include <stdbool.h>

int main(){
    int c, num[100]={0}, count=0;
    bool occupied[100]={false}; //초기화 방법 기억하기

    scanf("%d", &c); //띄어쓰기 없이 한 자리씩 입력받을 때는 "%1d"

    //손님이 들어오는 순서대로 자리 번호를 받아
    for(int i=0; i<c; i++){
        scanf("%d", &num[i]);
    }

    //자리 번호 받은 배열 순회하면서 bool 배열을 true로 & 튕기면 count++;
    for(int i=0; i<c; i++){
        if(occupied[num[i]]==false) occupied[num[i]]=true;
        //occupied 배열 인덱스가 i가 아니라 num[i]인 점에 주의
        else count++;
    }

    printf("%d", count);

    return 0;
}