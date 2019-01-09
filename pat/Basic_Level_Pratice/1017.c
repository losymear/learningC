#include <stdio.h>
#include <string.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/


int main() {

    char A[1001];
    int B;
    char result[1001] = "";
    scanf("%s %d", A, &B);

    int val = 0;
    int lenA = (int) strlen(A);
    for (int i = 0; i < lenA; ++i) {
        val = 10 * val + A[i] - '0';
        result[i] = (char) (val / B + '0');
        val %= B;
    }
    int noZeroPoint = 0;
    while (result[noZeroPoint] == '0') {
        noZeroPoint++;
    }

    result[lenA] = '\0';
    if (noZeroPoint >= lenA) {

        printf("%d %d\n", 0, val);
    } else {
        printf("%s %d\n", &result[noZeroPoint], val);
    }

}

