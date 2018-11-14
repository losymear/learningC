//
// Created by 王银 on 2018/11/17.
//


// 数行数
#include "stdio.h"
main(){
    int nc, c;
    nc=0;
    while ((c=getchar()) != EOF){
        if(c=='\n'){
            ++nc;
        }
    }
    printf("%d\n", nc);
}