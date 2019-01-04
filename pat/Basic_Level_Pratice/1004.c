#include <stdio.h>
#include <limits.h>
#include <memory.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-03 19:12
*/


int main() {

    int n;
    scanf("%d", &n);

    int minScore = INT_MAX, maxScore = INT_MIN;
    char minName[11], maxName[11], minStudentId[11], maxStudentId[11];


    while (--n >= 0) {
        char tmpName[11], tmpStudentId[11];
        int tmpScore;
        scanf("%s", tmpName);
        scanf("%s", tmpStudentId);
        scanf("%d", &tmpScore);
        if (tmpScore > maxScore) {
            maxScore = tmpScore;
            strcpy(maxName, tmpName);
            strcpy(maxStudentId, tmpStudentId);
        }
        if (tmpScore < minScore) {
            minScore = tmpScore;
            strcpy(minName, tmpName);
            strcpy(minStudentId, tmpStudentId);
        }

    }
    printf("%s %s\n", maxName, maxStudentId);
    printf("%s %s\n", minName, minStudentId);
}

