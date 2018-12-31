#include <stdio.h>
#include <memory.h>
#include <ctype.h>
#include <limits.h>

/**
* @program: zhongM2018
* @description: 简单计算器，加减乘除，无优先级
* from 5uwu
* 题目地址 https://pintia.cn/problem-sets/1038556766531473408/problems/1038556810944958477#p-20
* @author: mearlosy
* @create: 2018-12-31 18:16
*/


#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char **argv) {

    int a,b;
    char c;
    int flag = 0;

    scanf("%d", &a);
    scanf("%c", &c);

    while(c!='='){
        scanf("%d", &b);
        switch(c){
            case '+': a = a + b;break;
            case '-': a = a - b;break;
            case '*': a = a * b;break;
            case '/': if(b){a = a / b;}else{flag=1;}break;
            default: flag = 1;break;
        }
        scanf("%c", &c);
    }
    if(flag){
        printf("ERROR\n");
    }else{
        printf("%d\n",a);
    }

    return 0;
}

