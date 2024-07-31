#include <stdio.h>

int main(){
    int n, list[100], target;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &list[i]);
    }

    scanf("%d", &target)

    int count=0;

    for(int i=0; i<n; i++){
        if(list[i]==target){
            count++;        
        }
    }

    printf("%d", count)

    return 0;
}