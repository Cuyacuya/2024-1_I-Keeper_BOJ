#include <stdio.h>

int main() {
    int T; // 테스트 케이스의 수
    scanf("%d", &T);

    while (T--) { //T번 반복
        int nums[10]; //10 크기의 배열
        for (int i = 0; i < 10; ++i) {
            scanf("%d", &nums[i]);
        }

        // 버블 정렬을 사용해 오름차순으로 정렬
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9 - i; ++j) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }

        // 3번째로 큰 수 출력
        printf("%d\n", nums[7]);
    }

    return 0;
}