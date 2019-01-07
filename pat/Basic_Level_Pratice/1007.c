#include <math.h>
#include <stdio.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-05 12:18
*/


int isPrime(int input);

int main() {

    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 3; i <= n - 2; ++i) {
        if (isPrime(i) && isPrime(i + 2)) {
            count++;
        }
    }
    printf("%d", count);
}


int isPrime(int input) {
    if (input == 1) {
        return 0;
    }

    for (int i = 2; i <= (int) sqrt(input); ++i) {
        if (input == input / i * i) {
            return 0;
        }

    }
    return 1;

}
