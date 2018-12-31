#include <stdio.h>
#include <math.h>
#include <memory.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2018-12-31 23:36
*/



int sum(char *input);

char *getPinYin(int digital);

int main() {

    char input[100];
    scanf("%s", input);
    int sumResult = sum(input);
    int tmp = sumResult;
    int size = 0;
    while (tmp > 0) {
        size++;
        tmp /= 10;
    }


    while (size > 0) {
        int current = sumResult / pow(10, size - 1);
        sumResult = sumResult - pow(10, size - 1) * current;
        size--;
        if (size == 0) {
            printf("%s", getPinYin(current));
        } else {
            printf("%s ", getPinYin(current));
        }
    }
}

int sum(char *input) {
    int result = 0;
    for (int i = 0; i < strlen(input); ++i) {
        result += input[i] - '0';
    }
    return result;

}

char *getPinYin(int digital) {
    switch (digital) {
        case 0:
            return "ling";
        case 1:
            return "yi";
        case 2:
            return "er";
        case 3:
            return "san";
        case 4:
            return "si";
        case 5:
            return "wu";
        case 6:
            return "liu";
        case 7:
            return "qi";
        case 8:
            return "ba";
        case 9:
            return "jiu";
        default:
            return "hehe";

    }
}