//
// Created by 王银 on 2018/11/18.
//


#include "stdio.h"


// 需要预先声明，否则表示在main函数体中使用
int power(int m, int n);

main(){
    int i;
    for(i=0; i<10; ++i){
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
}


int power(int base, int n){
    if(n>0){
        return base * power(base, n-1);
    }
    else{
        return 1;
    }
}
