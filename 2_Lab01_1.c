#include <stdio.h>

int main(){
    int c, n;
    scanf("%d", &c);
    
    int numlist[10001] = {0};
    for(int i=0; i<c; i++){
        scanf("%d", &n);
        numlist[n]++;
    }

    for(int i=0; i<10001; i++){
        for(int j=0; j<numlist[i]; j++){
        printf("%d\n", i);        
        }
    }

    return 0;
}