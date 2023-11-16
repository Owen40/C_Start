#include <stdio.h>

int main() {
    int a = 10;
    int *q;
    q = &a;
    float b = 10.5;
    float *r;
    r = &b;

    printf("Value of q = %d \n", q);
    printf("Value of a = %d \n", a);
    printf("Value of *q = %d \n", *q);
    printf("Value of r = %d \n", r);
    printf("Value of b = %.2f \n", b);
    printf("Value of *r = %d \n", *r);
}