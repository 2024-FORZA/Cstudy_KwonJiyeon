#include <stdio.h>
int main()
{
    int num;
    
    scanf("%d", &num);
    for(int i=1; num>=i; i++) { //줄

        for(int j=1; j<=num-i; j++) { //공백
            printf(" ");
        }
        for(int k=1; i>=k; k++) { //*
            printf("*");
        }
        printf("\n");
    }

    return 0;
}