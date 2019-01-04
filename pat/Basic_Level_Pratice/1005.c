#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description:
* TODO: @wy 修改，写的很容易出现bug
* @author: mearlosy
* @create: 2019-01-04 16:33
*/


int handleOverlay(int input[], int currentVal, int remainSize, int currentIdx);


int main() {
    int K, remainSize, startSize;
    scanf("%d", &K);
    startSize = remainSize = K;
    int input[K];
    while (--K >= 0) {
        scanf("%d", &input[K]);
    }
    int step = 1;

    // 如果存在被覆盖数，则从input中删除
    for (int j = 0; j < remainSize; j += step) {
        int currentVal = input[j];
        while (currentVal != 1) {
            currentVal = (currentVal % 2 == 1) ? (currentVal * 3 + 1) / 2 : currentVal / 2;
            int calc = handleOverlay(input, currentVal, remainSize, j);
            if (calc == 1) {
                remainSize--;
                step = 1;
            } else if (calc == 2) {
                remainSize--;
                step = 0;
                break;
            }
            step = 1;
        }

    }

    int result[100] = {0};
    for (int k = 0; k < remainSize; ++k) {
        result[input[k]] = 1;
    }


    int start = 0;
    for (int i = 100; i >= 0; --i) {
        if (result[i] == 1) {
            if (start == 1) {
                printf(" %d", i);
            } else {
                printf("%d", i);
                start = 1;
            }
        }

    }

}

/**
 * @param input
 * @param currentVal
 * @param remainSize
 * @param currentIdx
 * @return 返回值2表示覆盖了之前的值，则不需要继续计算（因为之后的步骤已经计算过）;返回值1表示之后有个数值被覆盖
 */
int handleOverlay(int input[], int currentVal, int remainSize, int currentIdx) {
    for (int i = 0; i < remainSize; ++i) {
        if (input[i] == currentVal) {
            if (i < currentIdx) {
                // 表示之后的步骤已经计算过，则将当前值放到已经计算过的点上，最后的值放到当前位置
                input[i] = input[currentIdx];
                input[currentIdx] = input[remainSize - 1];
                return 2;
            }
            input[i] = input[remainSize - 1];
            return 1;
        }

    }
    return 0;
}
