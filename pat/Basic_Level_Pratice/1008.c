#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description:
* @author: mearlosy
* @create: 2019-01-05 12:25
*/




int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    while (M >= N) {
        M -= N;
    }
    int arr[N];

    // 初始化
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }


    // 打印前M个
    for (int j = 0; j < M; ++j) {
        printf("%d ", arr[N + j - M]);
    }

    for (int k = M; k < N; ++k) {
        if (k == N - 1) {
            printf("%d\n", arr[k - M]);
        } else {
            printf("%d ", arr[k - M]);
        }

    }


}
