#include <stdio.h>

int main() {
    int N, M;  // 바구니 개수 N과 명령 수 M
    scanf("%d %d", &N, &M);

    int baskets[N];
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1;  // 초기화: 바구니 번호를 1부터 N까지로 설정
    }

    while (M--) {
        int i, j;
        scanf("%d %d", &i, &j);  // 범위 입력
        i--; j--;  // 배열 인덱스는 0부터 시작하므로 1을 빼줌

        // i부터 j까지의 구간을 역순으로 바꿈
        while (i < j) {
            int temp = baskets[i];
            baskets[i] = baskets[j];
            baskets[j] = temp;
            i++;
            j--;
        }
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        printf("%d ", baskets[i]);
    }
    printf("\n");

    return 0;
}
