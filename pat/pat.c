#include <printf.h>

int monthAmount(int month);

int main() {

    int amount;
    scanf("%d", &amount);
    int day = 1;
    while (1) {
        int trueAmount = monthAmount(day);
        if (trueAmount >= amount) {
            printf("%d", day);
            return 0;
        } else {
            day++;
        }

    }


//    {
//        for (int i = 0; i < 10; ++i) {
//            printf("第%d有%d只\n", i, monthAmount(i));
//
//        }
//    }

}


int monthAmount(int month) {
    if (month <= 2) {
        return 1;
    }
    if (month == 3) {
        return 2;
    }

    // monthAmount(month-1)-monthAmount(month-2)表示前一个月新兔子数
    return  monthAmount(month - 1) + monthAmount(month - 2);
}


