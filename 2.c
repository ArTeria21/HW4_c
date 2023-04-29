#include <stdio.h>

int main() {
    int first_day, amount_of_days, i, j;
    scanf("%d %d", &amount_of_days, &first_day);
    char space = ' ';
    int day = 0;
    int weak = 0;
    while (day != amount_of_days) {
        weak++;
        for (j=1; j<=7; j++) {
            if ((weak==1) && (j<first_day)) {
                printf("%4c",space);
            }
            else {
                if (day != amount_of_days) {
                    day += 1;
                    printf("%3d ", day);
                }
            }
        }
        printf("\n");
    }
    return 0;
}