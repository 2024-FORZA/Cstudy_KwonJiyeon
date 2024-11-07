#include <stdio.h>
#include <string.h>

int main(){
    
    int a=0, b=0;
    char num1[3]={0}, num2[3]={0};
    
    
    for(int i=0; i<3; i++){
        scanf(" %c", &num1[i]);
    }
    for(int i=0; i<3; i++){
        scanf(" %c", &num2[i]);
    }
    
    a = ((int)num1[0]-'0') + ((int)num1[1]-'0')*10 + ((int)num1[2]-'0')*100; //char을 바로 int로 형변환하면 그 숫자가 아니라 아스키코드가 나오겠죠?? 파이썬이랑 다르죠???
    b = ((int)num2[0]-'0') + ((int)num2[1]-'0')*10 + ((int)num2[2]-'0')*100;
    
    if(a<b) printf("%d", b);
    else printf("%d", a);
    
    return 0;
}