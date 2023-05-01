#include <stdio.h>

int main() {
    int n, i, zeros=0, positive=0, negative=0, number;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &number);
        if (number == 0) {
            zeros += 1;
        }
        else if (number > 0) {
            positive += 1;
        }
        else if (number < 0) {
            negative += 1;
        }
        
    }

    printf("%d %d %d\n", zeros, positive, negative);
    return 0;
}