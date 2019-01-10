#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/


int main() {
    int numCounter[10] = {0};
    int firstPrinted = 0;
    for (int i = 0; i <= 9; ++i) {
        scanf("%d", &numCounter[i]);
        if (firstPrinted == 0 && i > 0 && numCounter[i] > 0) {
            printf("%d", i);
            numCounter[i]--;
            firstPrinted = 1;
        }
    }


    for (int j = 0; j <= 9; ++j) {
        while (--numCounter[j] >= 0) {
            printf("%d", j);
        }
    }


}

