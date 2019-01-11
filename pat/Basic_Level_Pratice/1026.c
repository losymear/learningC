

#include <math.h>
#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/


int main() {

    int startTime, endTime;
    scanf("%d %d", &startTime, &endTime);

    int totalSeconds = (endTime - startTime) / 100;
    if (((endTime - startTime) - 100 * totalSeconds) >= 50) {
        totalSeconds++;
    }

    int seconds = totalSeconds % 60;
    int minutes = (totalSeconds / 60) % 60;
    int hours = totalSeconds / 3600;
    printf("%02d:%02d:%02d", hours, minutes, seconds);

}

