#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a<=b)
        if (a<=c) //a는 최소, b와 c의 관계?
            if (b<=c) //둘 중 작거나 같은 것 도출
                printf("%d", b);
            else
                printf("%d", c);
        else //c가 최소, a가 b보다 작거나 같음
            printf("%d", a);
    else //a>b
        if (a<=c) //중간값은 a
            printf("%d", a);
        else // a>c -> 최댓값은 a, b와 c의 관계?
            if (b<=c) //둘 중 크거나 같은 것 도출
                printf("%d", c);
            else
                printf("%d", b);
    
    return 0;
}