#include <stdio.h>
#include <string.h>

int main() 
{
    char a[20];
    int l;

    printf("Enter your name \n");
    scanf("%s", &a);

    l = strlen(a);

    printf("The length of your name is %d \n", l);

    return 0;
}