#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 18:57
*/



int main() {

    int T;
    scanf("%d", &T);
    long A, B, C;

    for (int i = 1; i <= T; ++i) {
        scanf("%lu %lu %lu", &A, &B, &C);
            printf("Case #%d: %s\n", i, A + B > C ? "true" : "false");
    }
}
