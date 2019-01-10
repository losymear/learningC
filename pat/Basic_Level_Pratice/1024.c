#include <stdio.h>
#include <string.h>

/**
* @program: Basic_Level_Pratice
* @description:  科学计数法， 注意一些细节
* @author: mearlosy
* @create: 2019-01-08 20:35
*/


int main() {
    char input[10001];
    scanf("%s", input);
    int n = (int) strlen(input);
    if (input[0] == '-') printf("-"); // 首位是-则输出

    int idx_dot = 2;

    int idx_E = idx_dot;

    while (input[++idx_E] != 'E') {
    }

    char symbolExp = input[idx_E + 1];

    // 指数的结对值
    int exp = 0;
    for (int k = idx_E + 2; k < strlen(input); ++k) {
        exp = 10 * exp + input[k] - '0';
    }
    // 指数为负数
    if (symbolExp == '-') {
        printf("0.");


        for (int i = 0; i < exp - 1; ++i) {
            printf("%d", 0);
        }
        printf("%c", input[idx_dot - 1]);

        for (int j = idx_dot + 1; j < idx_E; ++j) {
            printf("%c", input[j]);
        }

    }

    // 指数为正数
    if (symbolExp == '+') {
        printf("%c", input[1]);
        // 指数不足，仍有小数部分
        if (exp < idx_E - 3) {
            for (int i = 0; i < exp; ++i) {
                printf("%c", input[3 + i]);
            }
            printf("%c", '.');
            for (int j = exp + 3; j < idx_E; ++j) {
                printf("%c", input[j]);

            }
            return 0;
        }
        for (int i = 3; i < idx_E; ++i) {
            printf("%c", input[i]);
        }
        for (int i = idx_E - idx_dot; i <= exp; ++i) {
            printf("%c", '0');
        }
    }


}


