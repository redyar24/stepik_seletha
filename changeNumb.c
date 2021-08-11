#include <stdio.h>

int input(int *n);
int changeNumber(int *a);
int output(int a);

int main() {
    int n;
    if (input(&n) == 2) {
        return 0;
    }
    changeNumber(&n);
    output(n);
    return 0;
}

int input(int *n) {
    if (scanf("%d", n) != 1) {
        printf("n/a");
        return 2;
    }
    return 0;
}

int changeNumber(int *n) {
    int temp, sto, des;
    temp = *n % 10;
    sto = *n / 100;
    des = *n - (sto * 100) - temp;
    *n = (temp * 100) + des + sto;
    return 0;
}

int output(int n) {
    printf("%d", n);
    return 0;
}
