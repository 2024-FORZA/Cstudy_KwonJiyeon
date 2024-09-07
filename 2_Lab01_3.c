#include <stdio.h>

long long fact(int);

int main(){
    int n;
    long long result;
    scanf("%d", &n);
    result = fact(n);
    printf("%lld", result);

    return 0;
}


long long fact(int n) 
{
    if (n==0) return 1;
    else
        return n*fact(n-1);
}