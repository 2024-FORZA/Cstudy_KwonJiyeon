#include <stdio.h>
#include <string.h>

int StringCount(char result[], int i);

int main(){
    int cycle;
    scanf("%d", &cycle);

    for(int i=0; i<cycle; i++){
        char result[80];
        scanf("%s", result); //문자열 입력받기


        //char 문자 비교 시 '' 쓰기
        int score=0, count, j;
        j = strlen(result);
        for(int i=0; i<j; i++){
            if(result[i]=='O'){
            count = StringCount(result, i); // O 나오면 점수계산하기
            score+=count;
            }
        }       
 
        printf("%d\n", score); // 점수 출력
    }

    return 0;
}


int StringCount(char result[], int i){ //재귀로 점수계산함수 만들어봄!
    if(i<0) return 0;
    if(result[i]=='O'){
            return 1 + StringCount(result, i-1);
    }
    else{
        return 0;
    }
}


//지피티 미워.
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int cycle;
//    scanf("%d", &cycle);
//
//    for (int i = 0; i < cycle; i++) {
//        char result[80];
//        scanf("%s", result); // 문자열 입력받기
//
//        int score = 0;
//        int consecutiveO = 0; // 연속된 'O'의 개수를 추적
//
//        for (int j = 0; j < strlen(result); j++) {
//            if (result[j] == 'O') {
//                consecutiveO++; // 'O'가 연속될 때마다 증가
//                score += consecutiveO; // 해당 문제의 점수를 누적
//            } else {
//                consecutiveO = 0; // 'X'가 나오면 연속 카운트를 초기화
//            }
//        }
//
//        printf("%d\n", score); // 점수 출력
//    }
//
//    return 0;