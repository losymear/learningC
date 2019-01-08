#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 15:26
*/


int main() {
    int val1 = -1, val2 = -1;
    int first = 1;
    while (scanf("%d %d", &val1, &val2) != EOF) {
        if (val2 != 0) {
            if(first){
                first = 0;
            } else{
                printf(" ");
            }
            printf("%d %d", val1 * val2, val2 - 1);
        }

    }
    if (first){
        puts("0 0");
    }

}

