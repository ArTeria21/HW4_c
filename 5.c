#include <stdio.h>

int main() {
    int counter=0;
    float average, sum, number;
    while (number != 0) {
        scanf("%f", &number);
        if (number == 0) {
            break;
        }
        sum += number;
        counter += 1;
    }
     
    average = sum / counter;
    printf("%f\n", average);
    return 0;
}