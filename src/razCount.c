#include <stdio.h>

int input(int *a);
int razborCount(int a, double *b);
void output(double a);

int main(void) {
    int n;
    double ans;
    input(&n);
    razborCount(n, &ans);
    output(ans);
    return 0;
}
 
int input(int *a) {
    if (scanf("%d", a) != 1)
        printf("n/a");
    return 0;
}

int razborCount(int a, double *b) {
    int chet4, chet2;
    int nochet3, nochet1;
    nochet1 = a % 10;
    chet2 = (a - nochet1) / 10 % 10;
    nochet3 = ((a - nochet1) / 10 - chet2) / 10 % 10;
    chet4 = ((((a - nochet1) / 10 - chet2) / 10) - nochet3) / 10 % 10;
    *b = (double)(chet4 * chet2) / (double)(nochet3 * nochet1);
    return 0;
}

void output(double a) {
    printf("%.2f", a);
}
