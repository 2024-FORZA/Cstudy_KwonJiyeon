#include <stdio.h>

int fiv(int);

int main(){
    int n, result;
    scanf("%d", &n);
    result = fiv(n);
    printf("%d", result);

    return 0;
}

int fiv(int n){
    if (n==0) 
        return 0;
    
    else if (n==1)
        return 1;
    
    else
        return (fiv(n-1)+fiv(n-2));
    }