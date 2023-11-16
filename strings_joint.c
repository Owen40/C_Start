#include <stdio.h>
#include <string.h>

int main() {
    char ch[10];
    char ch2[10];

    printf("Enter your First name \n");
    scanf("%s", &ch);

    printf("Enter your second name \n");
    scanf("%s", &ch2);

    strcat(ch, ch2);
    printf("your name is: %s", ch);

    return 0;
}
