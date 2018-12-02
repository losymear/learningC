//
// Created by 王银 on 2018/12/2.
//
//In a two's complement number representation, our version of itoa does not handle the largest negative number, that is, the value of n equal to -(2^(wordsize-1)). Explain why not. Modify it to print that value correctly, regardless of the machine on which it runs.

#include "stdio.h"

void main() {
    printf("因为在itoa方法中如果`n`小于0会执行`n = -n`来使得`n`始终为正数。"
           "但是c的int（以int32为例）类型范围为`-2**31`到`2**31-1`，这样对`-2**31`取反会溢出。"
    );
}

