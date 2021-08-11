#include <stdio.h>
#include <math.h>

int input(int *a);
double resultWater(int a, double *b, double *c);
void output(double a, double b);

int main(void) {
    int n; // колличество стаканов
    double kapli;
    double molekul;
    input(&n);
    resultWater(n, &kapli, &molekul);
    output(kapli, molekul);
    return 0;
}

int input(int *a) {
    if (scanf("%d", a) != 1)
        printf("n/a");
    return 0;
}

double resultWater(int a, double *b, double *c) {
    double massMolekul = 3e-23;
    double massKapli = 0.05;
    double stakan = 249.5;
    *b = a * (stakan / massKapli);
    *c = *b * (massKapli / massMolekul);
    *b = *b / 1000;
    return 0;
}

void output(double a, double b) {
    printf("%e %.3e", a, b);
}
