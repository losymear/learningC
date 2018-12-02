

#include "stdio.h"
#include "ctype.h"

void itoa(int n, char s[]) {
    int i, sign;
    if ((sign = n) < 0)  /* record sign */
        n = -n;          /* make n positive */
    i = 0;
    do {      /* generate digits in reverse order */
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    printf(s);
//    printf(s[2]);

//    reverse(s);
}