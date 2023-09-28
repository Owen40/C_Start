#include <stdio.h>

int main() {
    int num1, num2, num3;
    float avg;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    avg = (float)(num1 + num2 + num3) / 3;

    printf("Average of the three numbers is: %.2f\n", avg);

    return 0;
}
