#include <stdio.h>

int main(){
    int a[10], b[10], c[42]={0};
    int count=0;

    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0; i<10; i++){
        b[i]=a[i]%42;
        c[b[i]]=1;
    }

    for(int i=0; i<42; i++){
        if(c[i] == 1){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}