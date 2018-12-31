#include <stdio.h>
#include <memory.h>
#include <ctype.h>
#include <limits.h>

/**
* @program: zhongM2018
* @description: 简单计算器，加减乘除，无优先级
* TODO: 为考虑数字的-
* @author: mearlosy
* @create: 2018-12-31 18:16
*/

int calc(int operand1, int operand2, char operator);


int main() {

    char s[100000];
    scanf("%s", s);

    int size = (int) strlen(s);
    // operator1_settled表示是否已经初始化operator1
    int operand1 = INT_MIN, operand2 = INT_MIN, preDigital = 0;
    char preOperator = 0;
    for (int i = 0; i < size - 1; ++i) {
        char currentChar = s[i];
        if (isdigit(currentChar)) {
            preDigital = 1;
            int currentDigit = currentChar - '0';
            if (operand2 != INT_MIN) {
                operand2 = 10 * operand2 + currentDigit;
                continue;
            }
            operand1 = (operand1 == INT_MIN) ? currentDigit : 10 * operand1 + currentDigit;
            continue;
        }

        // 如果是标点符号，且operator1为INT_MIN，则格式错误
        if (operand1 == INT_MIN) {
            printf("ERROR");
            return 0;
        }


        if (currentChar == '+' || currentChar == '-' || currentChar == '*' || currentChar == '/') {
            if (preDigital != 1) {
                printf("ERROR");
                return 0;
            }
            if (preOperator != 0) {
                operand1 = calc(operand1, operand2, preOperator);
                if (operand1 == INT_MIN) {
                    printf("ERROR");
                    return 0;
                }
            }
            preOperator = currentChar;
            operand2 = 0;
            preDigital = 0;
            continue;
        }


        printf("ERROR");
        return 0;
    }
    if (s[size - 1] == '=') {
        int result = calc(operand1, operand2, preOperator);
        if (result == INT_MIN) {
            printf("ERROR");
            return 0;
        }
        printf("%d", result);
    } else {
        printf("ERROR");
        return 0;
    }

}


int calc(int operand1, int operand2, char operator) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand2 == 0 ? INT_MIN : operand1 / operand2;
        default:
            return INT_MIN;
    }
}

