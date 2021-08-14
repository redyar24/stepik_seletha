#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n < 2 && n > -1) {
        if (n == 1)
            printf("0");
        if (n == 0)
            printf("1");
    } else {
        printf("n/a");
    }
    return 0;
}
