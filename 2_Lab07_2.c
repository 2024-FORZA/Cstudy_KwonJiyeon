#include <stdio.h>
#define MAX 100000

//다시 한 번 스택
typedef struct Stack {
    int stack[MAX];  
    int top;          
} Stack;

// 스택 초기화 함수 : 막상 적어놓고 밑에서 그냥 내맘대로 초기화함ㅋㅋㅋ
//void init(Stack* s) {
//    s->top = -1;  //스택이 빔
//}

// 스택이 비었는지 확인하는 함수 는 여기선 일단 필요없으니 주석처리
//int is_empty(Stack* s) {
//    return s->top == -1;  // top이 -1이면 스택이 비어 있음.
//}

// 스택에 데이터를 집어넣는 함수
void push(Stack* s, char c) {
    if (s->top < MAX - 1) {
        s->stack[++(s->top)] = c;  // top을 하나 증가시키고 스택에 값 넣음
    }
}

// 스택에서 데이터를 빼오는 함수
char pop(Stack* s) {
    if (s->top > -1) { //    if (!is_empty(s))를 할 수가 없음 
        return s->stack[(s->top)--];  // top을 하나 감소시키며 값 반환
    }
    return '\0';  // 스택이 비었으면 널문자 반환
}

int main(){
    int K, n;
    struct Stack s = {{0}, -1};
    scanf("%d", &K);
    for(int i=0; i<K; i++){
        scanf("%d", &n);
        if(n==0) pop(&s);
        else push(&s, n);
    }
    int total = 0;
    for (int i = 0; i <= s.top; i++) {
        total += s.stack[i];  
    }
    printf("%d\n", total);

    return 0;
}