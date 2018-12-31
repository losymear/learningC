//
// for pat exercise
// 输入"yyyy/mm/dd"格式的日期，该天是一年中的第几天？
//


#include <stdio.h>


int isLeap(int year);

int getMonthDays(int mm, int yyyy);

int main() {

    int yyyy, mm, dd;
    scanf("%d/%d/%d", &yyyy, &mm, &dd);

    int handled = 1;
    int days = 0;
    while (mm > handled) {
        days += getMonthDays(handled, yyyy);
        handled++;
    }
    printf("%d", days + dd);

}


/**
 * 判断是否是闰年
 * @param year 年份，如2018
 * @return
 */
int isLeap(int year) {
    if (year == year / 100 * 100) {
        return year == year / 400 * 400 ? 1 : 0;
    }
    return year == year / 4 * 4 ? 1 : 0;

}


int getMonthDays(int mm, int yyyy) {
    if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
        return 31;
    }
    if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
        return 30;
    }
    if (mm == 2) {
        return isLeap(yyyy) ? 29 : 28;
    }
    return 0;

}
