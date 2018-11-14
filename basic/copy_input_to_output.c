#include "stdio.h"

//将输入复制到输出。 可以尝试`printf "测试"|./a.out`

main(){
    int c;
    while ((c=getchar())!=EOF){
        putchar(c);
    }
}
