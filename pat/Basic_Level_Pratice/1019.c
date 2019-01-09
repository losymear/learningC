#include <stdio.h>
#include <stdlib.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/

int compare(const void *a, const void *b);

int transform(int input, int arr[]);


int main() {
    int N;
    scanf("%d", &N);


    int arr[4];
    int c;

    // 使用do-while的原因是即使输入6174也要进行该循环
    do{
        if (N == N / 1111 * 1111) {
            printf("%04d - %04d = 0000\n", N, N);
            break;
        }
        int little = transform(N, arr);
        int big = 1000 * arr[3] + 100 * arr[2] + 10 * arr[1] + arr[0];
        printf("%04d - %04d = %04d\n", big, little, (N = big - little));

    }while (N != 6174);


}

int compare(const void *a, const void *b) {

    return *(const int *) a - *(const int *) b;
}

int transform(int input, int arr[]) {

    for (int i = 3; i >= 0; --i) {
        arr[i] = input % 10;
        input /= 10;
    }
    qsort(arr, 4, sizeof(arr[0]), compare);

    return 1000 * arr[0] + 100 * arr[1] + 10 * arr[2] + arr[3];
}
