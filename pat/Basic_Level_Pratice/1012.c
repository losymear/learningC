#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 19:09
*/



int main() {
    int N;
    scanf("%d", &N);
    int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    int currentVal, currentRemain;
    while (N-- > 0) {
        scanf("%d", &currentVal);
        currentRemain = currentVal % 5;
        switch (currentRemain) {
            case 0:
                if (currentVal % 2 == 0) {
                    count1++;
                    A1 += currentVal;
                }
                break;
            case 1:
                count2++;
                A2 += currentVal * ((count2 % 2 == 0) ? -1 : 1);
                break;
            case 2:
                count3++;
                A3++;
                break;
            case 3:
                count4++;
                A4 += currentVal;
                break;
            case 4:
                count5++;
                A5 = currentVal > A5 ? currentVal : A5;
                break;
            default:
                break;
        }

    }


    if (count1 == 0) {
        printf("N");
    } else {
        printf("%d", A1);
    }

    if (count2 == 0) {
        printf(" N");
    } else {
        printf(" %d", A2);
    }

    if (count3 == 0) {
        printf(" N");
    } else {
        printf(" %d", A3);
    }

    if (count4 == 0) {
        printf(" N");
    } else {
        printf(" %.1f", 1.0 * A4 / count4);
    }

    if (count5 == 0) {
        printf(" N");
    } else {
        printf(" %d", A5);
    }
}
