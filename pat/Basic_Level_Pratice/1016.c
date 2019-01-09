#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/

int getPA(int A, int DA);

int main() {
    int A, DA, B, DB;
    scanf("%d %d %d %d", &A, &DA, &B, &DB);
    printf("%d", getPA(A, DA) + getPA(B, DB));

}


int getPA(int A, int DA) {
    int result = 0;
    while (A > 0) {
        if (A % 10 == DA) {
            result = 10 * result + DA;
        }
        A /= 10;
    }

    return result;

}
