#include <stdio.h>
int main() {
    float length, width, perimeter;
    printf("Enter the length of the rectangle: \n");
    scanf("%f ", &length);
    printf("Enter the width of the rectangle: \n");
    scanf("%f", &width);
    perimeter = 2 * (length + width);
    printf("The perimeter of the rectangle is : %f \n", perimeter);
    return 0;
}
