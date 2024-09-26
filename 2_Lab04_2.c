#include <stdio.h>

int main(){
    int L, P, V, count;
    
    for(int i=1;;i++){ //while(1) 같은 무한루프 for문
        scanf("%d %d %d", &L, &P, &V);

        if(!L && !P && !V) break; //0 0 0 이면 1 1 1로 해서 break시키는 것

        count = V / P * L;
        V = V % P;

        if(V<L) count+=V;
        else count+=L;

        printf("Case %d: %d\n", i, count);
    }

    return 0;
}