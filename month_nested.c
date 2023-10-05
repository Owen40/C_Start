#include <stdio.h>

int main() {
    int month;
    printf("Enter a digit between 1 - 5 \n");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
        printf("The month is January \n");
        break;

        case 2:
        printf("The month is February \n");
        break;

        case 3:
        printf("The month is March \n");
        break;

        case 4:
        printf("The month is April \n");
        break;

        case 5:
        printf("The month is May \n");
        break;

        default:
        printf("invalid entry \n");
        break;
    }
    return 0;
}
