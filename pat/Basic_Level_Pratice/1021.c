#include <memory.h>
#include <printf.h>

/**
* @program: Basic_Level_Pratice
* @description: 
* @author: mearlosy
* @create: 2019-01-08 20:35
*/


int main() {

    char N[1001];
    int counter[10] = {0};

    scanf("%s", N);

    int len = (int) strlen(N);
    for (int i = 0; i < len; ++i) {
        counter[N[i] - '0']++;
    }

    for (int j = 0; j < 10; ++j) {
        int val;
        if ((val = counter[j]) > 0) {
            printf("%d:%d\n", j, val);
        }
    }


}

