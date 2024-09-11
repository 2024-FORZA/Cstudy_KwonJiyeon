#include <stdio.h>
#include <string.h>
int main(){
    int c;
    scanf("%d", &c);
    
    int score, min=4;
    char temp[11], name[11]; //제일 작은 거 하나만 받으면 되니까 상관없을지도
    
    for(int i=0; i<c; i++){
        scanf("%s %d", &temp, &score);
        if(score<min){
            min=score;
            strcpy(name, temp); 
        }
    }
    
        printf("%s", name);
    
    return 0;
}