#include <stdio.h>
#include <math.h>

int input(int *a);
int raschet(int *a);

int main(void) {
    int n;
    input(&n);
    raschet(&n);
    printf("%lld", n);
    return 0;
}

int input(int *a) {
    if (scanf("%d", a) != 1)
        printf("n/a");
    return 0;
}

int raschet(int *a) {
    long int twoGb = pow(2,30);
    long int tenGb = pow(10,9);
    long long int temp = (long)*a;
    *a = temp * (tenGb - twoGb);
    return 0;
}
