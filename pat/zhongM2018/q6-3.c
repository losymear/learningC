/**
 * @program: qumianshi
 * @description:
 * @author: losymear
 * @create: 2018-10-29 17:19
 */

#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */



bool palindrome(char *s) {
    int size = (int) strlen(s);
    for (int idx = 0; idx < size / 2 + 1; idx++) {
        if (s[idx] != s[size - idx - 1]) {
            return false;
        }
    }
    return true;
}