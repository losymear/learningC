#include <stdio.h>
#include <memory.h>
#include <ctype.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/

int min(int val1, int val2);

char *getDate(char input);

int main() {

    char str1[61];
    char str2[61];
    char str3[61];
    char str4[61];

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    scanf("%s", str4);

    int i = 0;

    for (i = 0; i < min((int) strlen(str1), (int) strlen(str2)); ++i) {
        if (str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G') {
            printf("%s ", getDate(str1[i]));
            break;
        }
    }
    char hour;
    for (i = i + 1;str1[i]&&str2[i]; ++i) {
        if ((hour = str1[i]) == str2[i]) {
            if (hour >= '0' && hour <= '9') {
                printf("%02d:", hour - '0');
                break;
            } else if (hour >= 'A' && hour <= 'N') {
                printf("%02d:", hour - 'A' + 10);
                break;
            }
        }
    }

    for (int j = 0; str3[j]&&str4[j]; ++j) {
        if (str3[j] == str4[j] && isalpha(str3[j])) {
                printf("%02d", j);
                break;
        }

    }

}

int min(int val1, int val2) {
    return val1 >= val2 ? val2 : val1;
}

char *getDate(char input) {
    switch (input) {
        case 'A':
            return "MON";
        case 'B':
            return "TUE";
        case 'C':
            return "WED";
        case 'D':
            return "THU";
        case 'E':
            return "FRI";
        case 'F':
            return "SAT";
        case 'G':
            return "SUN";
        default:
            return "ERROR";
    }
}
