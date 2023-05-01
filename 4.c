#include <stdio.h>

int main() {
    int number, residue, i=0, partial, j;
    int result[500];
    scanf("%d", &number);

    if (number < 0) {
        printf("-1");
        number = number * -1;
    }
    else {
        printf("1");
    }

    residue = number % 2;
    result[0] = residue;
    partial = number / 2;
    while (partial != 1) {
        i++;
        residue = partial % 2;
        partial = partial / 2;
        result[i] = residue;
    }

    for (j=i; j>=0; j--) {
        printf("%d", result[j]);
    }
    
    printf("\n");
    return 0;
}