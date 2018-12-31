#include "stdio.h"

int main() {

    int N;
    scanf("%d", &N);
    int total = 1;
    while (N-- > 1) {
        total = total * 2 + 2;
    }
    printf("%d", total);

}

