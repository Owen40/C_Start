#include <stdio.h>
int main() {
    const float pi=3.142;
    float radius, area;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("The area of the circle is: %f \n", area);
    return 0;
}
