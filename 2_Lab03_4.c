#include <stdio.h>

int main(){
    //난쟁이 키 저장하는 배열을 만들고 싹 입력받은 후 total에 sum 저장
    int len[9], check[2], reallen[7];
    int total=0, over, count=0;
    
    for(int i=0; i<9; i++){
        scanf("%d", &len[i]);
        total+=len[i];
    }
    //total값이 100보다 큼 : 넘어가는 수치를 over에 저장,

    //가짜난쟁이 둘 키의 합이 over값과 같을 때 일단 인덱스 저장
    over=total-100;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(i==j) continue;
            else if(over == len[i]+len[j]) {
                check[0]=i;
                check[1]=j;
            }
        }
    }
    //가짜난쟁이 인덱스 삭제하고 
    for(int i=0; i<9; i++){
        if(i==check[0] || i==check[1]) continue;
        int temp=len[i];
        reallen[count]=temp;
        count++;
    }

    //정렬("버블 정렬")
    for(int i=0; i<7; i++){
        for(int j=0; j<7-i-1; j++){
            if(reallen[j]>reallen[j+1]){
                int temp2=reallen[j];
                reallen[j]=reallen[j+1];
                reallen[j+1]=temp2;
            }
        }
    }
    
    //printf
    for(int i=0;i<7;i++) printf("%d\n", reallen[i]);
    
    return 0;
}