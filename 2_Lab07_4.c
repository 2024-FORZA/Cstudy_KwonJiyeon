#include <stdio.h>
#include <stdlib.h>


//비교함수정의(정렬의 기준을 설정해줌)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int main(){
    int all[5], total=0, mean;
    for(int i=0; i<5; i++){
        scanf("%d", &all[i]);   
        total += all[i];
    }
    mean=total/5;
    int n = sizeof(all) / sizeof(all[0]);
    
    qsort(all, n, sizeof(int), compare);//이렇게하는게맞나
    
    printf("%d\n", mean);
    printf("%d\n", all[2]);
    
    return 0;   
}