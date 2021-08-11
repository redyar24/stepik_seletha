#include <stdio.h>

int input(int *n);
int changeNumber(int a, int b, int c , int n);
int output(int a, int b, int c);

int main() {
    int n;
    int a, b, c;
    input(&n);
    changeNumber(a, b, c , n);
    output(a, b, c);
    // printf("main");
}

int input(int *n) {
    scanf("%d", n);
    // printf("input");
    // return n;
}

int changeNumber(int a, int b, int c , int n) {
    c = n % 10;
    b = ((n - c) % 100) / 10;
    a = ((n - c - b) % 1000) / 100;
    printf("%3d <- changeNumb", n);
    // return 0;
}

int output(int a, int b, int c) {
    printf("%d%d%d", c, b, a);
    // printf("output");
    // return 0;
}
