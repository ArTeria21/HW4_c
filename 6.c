#include <stdio.h>

int main() {
    int n, i, counter=0, number;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &number);
        if (number > 0) {
            counter += 1;
        }
    }

    printf("%d\n", counter);
    return 0;
}