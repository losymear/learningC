#include <stdio.h>
#include <memory.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-07 21:44
*/




int main() {
    char str[81];

    gets(str);

    int lastPoint = (int) strlen(str), currentPoint = (int) strlen(str);
    int t = 0;
    while (currentPoint > 0) {
        t++;
        while (currentPoint != 0 && str[currentPoint] != ' ') {
            currentPoint--;
        }
        if (currentPoint == 0) {
            printf("%s", &str[0]);
        } else {
            printf("%s ", &str[currentPoint + 1]);
        }
        str[currentPoint] = '\0';
    }
}
