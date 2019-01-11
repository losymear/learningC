#include <stdio.h>
#include <string.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/


int main() {

    int N;
    scanf("%d", &N);
    int minTime = 99999999, maxTime = 0, validCount = 0;
//    char *minName = "default", *maxName = "default", *currentName = "default";
    char minName[6], maxName[6], currentName[6];
    int yyyy, mm, dd;
    while (N-- > 0) {
        scanf("%s %d/%d/%d", currentName, &yyyy, &mm, &dd);
        int calTime = 10000 * yyyy + 100 * mm + dd;
        if (calTime < 18140906 || calTime > 20140906) {
            continue;
        }
        validCount++;
        if (calTime >= maxTime) {
            strncpy(maxName, currentName, 6);
            maxTime = calTime;
        }
        if (calTime <= minTime) {
            strncpy(minName, currentName, 6);
            minTime = calTime;
        }

    }

    if (validCount > 0) {
        printf("%d %s %s\n", validCount, minName, maxName);
    } else{
        printf("0");
    }

}

