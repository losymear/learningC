#include "stdio.h"


int a=0;

int add(){
    return ++a;
}

void pr(){
    static int a =3;
    a++;
    printf("%d", a);
}

int main(void) {
    pr();
    pr();

}
