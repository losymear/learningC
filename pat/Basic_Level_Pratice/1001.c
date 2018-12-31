#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description:
* @author: mearlosy
* @create: 2018-12-31 23:36
*/




int main() {
    int input;
    scanf("%d", &input);

    int times = 0;
    while (input > 1) {
        input = input % 2 == 0 ? input / 2 : (3 * input + 1)/2;
        times++;
    }
    printf("%d", times);

}