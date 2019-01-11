#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/

int printSymbol(int num, int total, char symbol, int noNewLine);


int main() {

    int N;
    char symbol;
    scanf("%d %c", &N, &symbol);

    int totalNum = 1;
    while ((totalNum + 1) * (totalNum + 1) / 2 - 1 <= N) {
        totalNum += 2;
    }
    totalNum -= 2;

    for (int i = totalNum; i >= 3; i -= 2) {
        printSymbol(i, totalNum, symbol, 0);
        N -= i;
    }

    for (int j = 1; j <= totalNum; j += 2) {
        printSymbol(j, totalNum, symbol, j == totalNum);
        N -= j;
    }

    printf("\n%d", N);

}


int printSymbol(int num, int total, char symbol, int noNewLine) {
    for (int i = 0; i < (total - num) / 2; ++i) {
        printf("%c", ' ');
    }
    for (int j = 0; j < num; ++j) {
        printf("%c", symbol);
    }
//    for (int i = 0; i < (total - num) / 2; ++i) {
//        printf("%c", ' ');
//    }
    if (!noNewLine) {
        printf("\n");
    }
}

