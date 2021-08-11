#include <stdio.h>

int input(int *a, int *b);
double drobi(int a, int b, double *x, double *y);
int output(int a, int b);

int main(void) {
    int M, N;
    double celoe, drobnoe;
    input(&M, &N);
    drobi(M, N, &celoe, &drobnoe);
    M = (int)celoe;
    N = (int)drobnoe;
    output(M, N);
    return 0;
}

int input(int *a, int *b) {
    if (scanf("%d %d", a, b) != 2)
        printf("n/a");
    return 0;
}

double drobi(int a, int b, double *x, double *y) {
    *x = (double)a / (double)b;
    *x = (int)*x % 10;
    *y = (double)a / (double)b;
    *y = *y * 10;
    *y = (int)*y % 10;
    return 0;
}

int output(int a, int b) {
    printf("%d %d", a, b);
    return 0;
}
