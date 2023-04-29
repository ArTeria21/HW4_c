#include <stdio.h>
#include <string.h>

int main() {
    int digits = 0, lowercase = 0, uppercase = 0, symbols = 0, code, flag, i;
    flag = 1;
    char password[100];
    scanf("%s", password);
    int len = strlen(password);
    if ((len < 8) || (len > 14)) {
        flag = 0;
    }
    if (flag != 0) {
        for (i=0; i<len; i++) {
            code = password[i];
            if ((code < 33) || (code > 126)) {
                flag = 0;
                break;
            }
            if (((code >= 33) && (code <= 47)) || ((code >= 58) && (code <= 64)) || ((code >= 91) && (code <= 96)) || ((code >= 123) && (code <= 126))) {
                symbols = 1;
                continue;
            }
            if (((code >= 48) && (code <= 57))) {
                digits = 1;
                continue;
            }
            if (((code >= 65) && (code <= 90))) {
                uppercase = 1;
                continue;
            }
            if (((code >= 97) && (code <= 122))) {
                lowercase = 1;
                continue;
            }

        }
    }

    if (uppercase + lowercase + symbols + digits < 3) {
        flag = 0;
    }
    
    if (flag == 0) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }
    return 0;
    
}