#include <stdio.h>
#include <stdlib.h> /*malloc??*/

int main(){
    int N, Q, sec[100], when[1000], len=0;

    scanf("%d %d", &N, &Q);

    for(int i=0; i<N; i++){
        scanf("%d", &sec[i]);
        len+=sec[i];
    }

    for(int i=0; i<Q; i++){
        scanf("%d", &when[i]);
    }//일단 입력은 다 받음
    
    int *score = (int*)malloc(len*sizeof(int));
    int occupied=0;

    for(int i=0; i<N ; i++){
        for(int j=0; j<sec[i]; j++){
            score[occupied]=i;
            occupied++;
        }
    }//이중for문 확신이 없는 나..

    for(int i=0; i<Q; i++){
        printf("%d\n", score[when[i]]+1);//인덱스 헷갈리지 않게 잘 체크하기!
    }

    free(score);
    return 0;
}