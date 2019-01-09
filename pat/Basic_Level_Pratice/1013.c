#include <stdio.h>
#include <math.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/

int isPrime(int input);

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int count = 0;
    int current = 1;
    int printedCounted = 0;
    while (count < N) {

        current += (current > 2) ? 2 : 1;
        if (isPrime(current) == 0) {
            continue;
        }
        count++;
        if (count < M) {
            continue;
        }
        printedCounted = count - M + 1;
        if (printedCounted % 10 == 1) {
            printf("%d", current);
        } else if (printedCounted % 10 == 0) {
            printf(" %d\n", current);
        } else {
            printf(" %d", current);
        }

    }

}

int isPrime(int input) {
    if (input == 1) return 0;
    if (input == 2) return 1;
    int sqrtVal = (int) sqrt(input);
    for (int i = 2; i <= sqrtVal; ++i) {
        if (input == input / i * i) {
            return 0;
        }
    }
    return 1;
}
