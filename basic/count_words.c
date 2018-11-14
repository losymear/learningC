//
// Created by 王银 on 2018/11/17.
// 统计字符数、单词数、行数
//



#include "stdio.h"
#define IN 1
#define OUT 2

main(){
 int c, nl, nw, nc, state;
 state = OUT;
 nl = nw = nc = 0;

 while ((c=getchar()) != EOF){
    ++nc;
    if(c=='\n'){
     ++nl;
    }
    if(c==' '||c=='\n'||c=='\t'){
        state=OUT;
    } else if(state == OUT){
        state = IN;
        ++nw;
    }
 }
    printf("%d %d %d\n", nl, nw, nc);
}