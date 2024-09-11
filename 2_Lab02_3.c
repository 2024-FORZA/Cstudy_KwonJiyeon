#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char room[100][100]; // 방의 최대 크기 100x100

    // 방의 구조 입력받기
    for (int i = 0; i < N; i++) {
        scanf("%s", room[i]);
    }

    int horizontal = 0, vertical = 0;

    // 가로로 누울 수 있는 자리 찾기
    for (int i = 0; i < N; i++) {
        int count = 0; // 빈 공간의 개수를 셈
        for (int j = 0; j < N; j++) {
            if (room[i][j] == '.') {
                count++;
            } else {
                if (count >= 2) horizontal++; // 2칸 이상의 빈 공간이 있으면 카운트
                count = 0; // 짐이 있으므로 카운트 초기화
            }
        }
        if (count >= 2) horizontal++; // 행 끝에서 2칸 이상의 빈 공간이 남은 경우
    }

    // 세로로 누울 수 있는 자리 찾기
    for (int j = 0; j < N; j++) {
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (room[i][j] == '.') {
                count++;
            } else {
                if (count >= 2) vertical++; // 2칸 이상의 빈 공간이 있으면 카운트
                count = 0; // 짐이 있으므로 카운트 초기화
            }
        }
        if (count >= 2) vertical++; // 열 끝에서 2칸 이상의 빈 공간이 남은 경우
    }

    printf("%d %d\n", horizontal, vertical); // 결과 출력

    return 0;
}
