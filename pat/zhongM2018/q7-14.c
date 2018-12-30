//
// for pat exercise
//

#include "stdio.h"

void change(int *startHourP, int *startMinuteP, int period) {
    *startMinuteP += period;
    if (period < 0) {
        while (*startMinuteP < 0) {
            *startHourP -= 1;
            *startMinuteP += 60;
        }
        return;
    }
    while (*startMinuteP >= 60) {
        *startHourP += 1;
        *startMinuteP -= 60;
    }
}

int main() {
    int val1, val2;
    scanf("%d %d", &val1, &val2);

    int startHour = val1 / 100;
    int startMinute = val1 % 100;
    change(&startHour, &startMinute, val2);
    printf("%d%02d", startHour, startMinute);


}

