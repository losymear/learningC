#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/


int main() {

    unsigned int A, B, D;
    int result[31];
    scanf("%d %d %d", &A, &B, &D);
    int count = 0;

    unsigned int sum = A + B;
    while (sum > 0) {
        result[count++] = sum % D;
        sum /= D;
    }

    if (count == 0) {
        printf("%d", 0);
        return 0;
    }

    for (int i = count - 1; i >= 0; --i) {
        printf("%d", result[i]);

    }


}

