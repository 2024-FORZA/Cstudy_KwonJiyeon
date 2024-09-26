#include <stdio.h>
#include <string.h>

int main(){
    char str[81];
    
    while (1) {
        
        gets(str);
        //scanf("%s", str);
        
        if(strcmp(str, "***")==0) break;         
        
        for(int i=(strlen(str)-1); i>=0; i--){
            printf("%c", str[i]);
        }
        printf("\n");
    }
    
    return 0;
}