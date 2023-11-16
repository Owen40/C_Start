#include <stdio.h>
#include <math.h>

void calculateArea(double *radius, double *area) {
    *area = M_PI * (*radius) * (*radius);
}

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    calculateArea(&radius, &area);

    printf("The area of the circle is: %lf \n", area);

    return 0;
}
