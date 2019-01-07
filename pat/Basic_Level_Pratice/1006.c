#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-05 12:12
*/




int main() {
    int input;
    scanf("%d", &input);

    int hundred = input / 100;
    input -= 100 * hundred;
    int ten = input / 10;
    int one = input - 10 * ten;
    for (int i = 0; i < hundred; ++i) {
        printf("%s", "B");
    }

    for (int i = 0; i < ten; ++i) {
        printf("%s", "S");
    }
    for (int j = 1; j <= one; ++j) {
        printf("%d", j);

    }

}
