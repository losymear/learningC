#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/

#define JIDX 0
#define CIDX 1
#define BIDX 2

int judge(char aInput, char bInput, int *winA, int *winB);

int main() {
    int N;
    scanf("%d\n", &N);
    // 分别表示C、J、B赢的次数
    int winA[3] = {0, 0, 0};
    int winB[3] = {0, 0, 0};
    int winCountA = 0, evenCountA = 0, lostCountA = 0;
    int winCountB = 0, evenCountB = 0, lostCountB = 0;
    char aInput, bInput;
    while (--N >= 0) {
        scanf("%c %c\n", &aInput, &bInput);
        int judgeResult = judge(aInput, bInput, winA, winB);
        if (judgeResult == 1) {
            winCountA++;
            lostCountB++;
            continue;
        }
        if (judgeResult == -1) {
            winCountB++;
            lostCountA++;
            continue;
        }
        evenCountA++;
        evenCountB++;
    }
    printf("%d %d %d\n", winCountA, evenCountA, lostCountA);
    printf("%d %d %d\n", winCountB, evenCountB, lostCountB);
    char table[3] = {'J', 'C', 'B'};
    int mostWinAIdx = 0, mostWinBIdx = 0;
    for (int i = 0; i < 3; ++i) {
        if (winA[i] >= winA[mostWinAIdx]) {
            mostWinAIdx = i;
        }
        if (winB[i] >= winB[mostWinBIdx]) {
            mostWinBIdx = i;
        }

    }

    printf("%c %c", table[mostWinAIdx], table[mostWinBIdx]);


}


/**
 * 比较，并修改胜利记录
 * @param aInput
 * @param bInput
 * @param winA
 * @param winB
 * @return
 */
int judge(char aInput, char bInput, int *winA, int *winB) {
    if (aInput == bInput) {
        return 0;
    }
    if (aInput == 'C') {
        if (bInput == 'J') {
            winA[CIDX]++;
            return 1;
        } else {
            winB[BIDX]++;
            return -1;
        }
    }
    if (aInput == 'J') {
        if (bInput == 'B') {
            winA[JIDX]++;
            return 1;
        } else {
            winB[CIDX]++;
            return -1;
        }
    }

    if (aInput == 'B') {
        if (bInput == 'C') {
            winA[BIDX]++;
            return 1;
        } else {
            winB[JIDX]++;
            return -1;
        }
    }

}
