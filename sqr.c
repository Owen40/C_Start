#include <stdio.h>
#include <math.h>

int main() 
{
    int num1;
    float SQUAREROOT;

    printf("Enter any number to find the square root \n");
    scanf("%d", &num1);

    SQUAREROOT = sqrt(num1);

    printf("Square root is = %.2f \n", SQUAREROOT);

    return 0;
}
