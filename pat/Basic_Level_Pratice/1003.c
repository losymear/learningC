#include <stdio.h>

#include <memory.h>

/**
* @program: Basic_Level_Pratice
* @description:
* 题目地址： https://pintia.cn/problem-sets/994805260223102976/problems/994805323154440192
* 由题目第2条规则和第3条规则可以得出，符合条件的结构要`P左侧A数 * PT中间A数 = T右边A数`，且中间不能没有A
* @author: mearlosy
* @create: 2018-12-31 23:36
*/

int main() {

    int N;
    scanf("%d", &N);
    char s[100];
    int times = 0;
    while (++times <= N) {
        scanf("%s", s);
        int ptGotten = 0, previousP = 0, judged = 0;
        int left = 0, middle = 0, right = 0;
        int status = 0;

        for (int i = 0; i < (int) strlen(s); ++i) {
            char currentChar = s[i];
            if (currentChar != 'P' && currentChar != 'A' && currentChar != 'T') {
                judged = 1;
                printf("NO\n");
                break;
            }
            if (currentChar == 'A') {
                if (status == 0) {
                    left++;
                }
                if (status == 1) {
                    middle++;
                }
                if (status == 2) {
                    right++;
                }
                continue;
            }
            if (currentChar == 'P') {
                if (ptGotten == 1) {
                    judged = 1;
                    printf("NO\n");
                    break;
                } else {
                    status = 1;
                    previousP = 1;
                    continue;
                }
            }
            if (previousP == 1) {
                status = 2;
                previousP = 0;
                ptGotten = 1;
                continue;
            } else {
                judged = 1;
                printf("NO\n");
                break;
            }


        }
        if (judged == 1) {
            continue;
        }
        if (ptGotten == 1 && left * middle == right && middle > 0) {
            printf("YES\n");
        } else {
            printf("NO\n");

        }
    }


}
