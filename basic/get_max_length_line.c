//
// Created by 王银 on 2018/11/19.
//


#include "stdio.h"
#define MAXLINE 1000  //最多处理的行数

int getline_(char line[], int maxline);
void copy(char to[], char from[]);

main(){
    int len;
    int max;
    char line[MAXLINE];  // 当前行
    char longest[MAXLINE]; // 保存的最长的行

    max = 0;
    while ((len = getline_(line, MAXLINE)) >0)
    {
        if(len>max){
            max = len;
            copy(longest, line);
        }
    }
        if(max >0){
            printf("%s", longest);
            return 0;
    }
}


// 获取输入的下一行的长度，并将之保存到line这个数组中
// 不过修改了外部状态，不知道是不是反模式
int getline_(char s[], int lim)
{
    int c, i;
    for(i = 0; i< lim -1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
        if(c=='\n'){
            s[i]=c;
            ++i;
        }
        s[i] = '\0';
        return i;
}


// 复制from到to中
void copy(char to[], char from[]){
    int i;
    i = 0;
    while ((to[i]=from[i])!='\0'){
        ++i;
    }
}
