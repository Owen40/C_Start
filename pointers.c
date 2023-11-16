#include <stdio.h>

int main() {
    float a = 10;
    float b = 10.5;

    int *q;
    int *r;

    q = &a;
    r = &b;

    printf("Value of q = %d \n", q);
    printf("Value of r = %d \n", r);
    printf("value of a = %.2f \n", a);
    printf("value of b = %.2f \n", b);
    printf("Value of *q = %d \n", *q);
    printf("Value of *r = %d \n", *r);

    return 0;

}
