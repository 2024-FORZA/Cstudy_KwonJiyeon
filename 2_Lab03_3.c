#include <stdio.h>

int main(){
    int a, b;
    while (1){
        scanf("%d %d", &a, &b);

        if(a==0 && b==0) break;        
    
        if(a>=b){
            if(a%b==0) printf("multiple\n");
            else printf("neither\n");
        }
        else{
            if(b%a==0) printf("factor\n");
            else printf("neither\n");
        }
    }

    return 0;
}//아이 초보적인실수를 몇개를하는거야