#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char s[101];
    scanf("%s", &s);

    int a, b=0;
    for(int i=0; i<n; i++){
        a=(int)s[i]; 
        //아니 int를 str로 받았는데 str을 int화하면 왜 아스키코드냐고
        b+=a-'0'; // 이걸 s[i] - '0' 로 하라고?
    }
    printf("%d\n", b);
    return 0;
}