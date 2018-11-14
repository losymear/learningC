//
// Created by 王银 on 2018/11/17.
//


// 数单词数
// 可以尝试`printf "测试"|./a.out`，结果为6
// 可以尝试`printf "test"|./a.out`，结果为4
#include "stdio.h"

main(){
    long nc;

    nc=0;
    while (getchar() != EOF){
        ++nc;
    }
        printf("%ld\n", nc);
}
