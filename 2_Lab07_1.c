#include <stdio.h>
#define MAX 100

//스택!!!!!!!
typedef struct Stack {
    char stack[MAX];  
    int top;          
} Stack;

// 스택 초기화 함수
void init(Stack* s) {
    s->top = -1;  // 그치 없으니까 없다고 가리켜야지
}

// 스택이 비었는지 확인하는 함수
int is_empty(Stack* s) {
    return s->top == -1;  // top이 -1이면 스택이 비어 있음.
}

// 스택에 데이터를 집어넣는 함수
void push(Stack* s, char c) {
    if (s->top < MAX - 1) {
        s->stack[++(s->top)] = c;  // top을 하나 증가시키고 스택에 값 넣음
    }
}

// 스택에서 데이터를 빼오는 함수
char pop(Stack* s) {
    if (!is_empty(s)) {
        return s->stack[(s->top)--];  // top을 하나 감소시키며 값 반환
    }
    return '\0';  // 스택이 비었으면 널문자 반환
}


//드디어 시작되는 main()
int main() {
    int T;
    scanf("%d", &T);  

    while (T--) {
        char ps[51];
        scanf("%s", ps);

        Stack s;
        init(&s); 
        int is_valid = 1;  // VPS 여부 (1이면 YES, 0이면 NO)

        // 괄호 문자열을 한 문자씩 검사
        for (int i = 0; ps[i] != '\0'; i++) {
            if (ps[i] == '(') {
                push(&s, ps[i]);  // 여는 괄호는 스택에 푸시
            } else if (ps[i] == ')') {
                if (is_empty(&s)) {  // 스택이 비어있다면 닫는 괄호가 잘못됨
                    is_valid = 0;
                    break;
                }
                pop(&s);  // 닫는 괄호는 스택에서 하나 꺼냄
            }
        }

        // 문자열 끝까지 검사한 후, 스택이 비어있으면 괄호가 올바르게 짝을 맞춘 것
        if (!is_empty(&s)) {
            is_valid = 0;
        }

        if (is_valid) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
