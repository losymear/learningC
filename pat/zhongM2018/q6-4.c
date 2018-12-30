//
// 查看一个字符串是否是另外一个字符串的子串
// 题目地址： https://pintia.cn/problem-sets/1038556766531473408/problems/1038556810940764163#p-4
//

#include <stdio.h>
#include <memory.h>

#define MAXS 30

char *search(char *s, char *t);

int main() {
    char s[MAXS], t[MAXS], *pos;
    // 给char[]复制string需要使用如下方式
    strcpy(s, "The C Programming Language");
    strcpy(t, "ram");

    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", (int) (pos - s));
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */

char *search(char *s, char *t) {
    char substr[MAXS];

    int sizeS = (int) strlen(s);
    int sizeT = (int) strlen(t);
    for (int i = 0; i < sizeS - sizeT + 1; ++i) {
        // 复制字符串
        memcpy(substr, &s[i], sizeT);
        substr[sizeT] = '\0';

        // 比较字符串
        if (strcmp(t, substr) == 0) {
            return &s[i];
        }

    }
    return NULL;
}