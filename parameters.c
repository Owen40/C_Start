#include <stdio.h>

int sum (int, int, int);
int main () {
    printf("Sum function with parameters \n");
    sum(10, 5,3);
}
int sum(int a, int b, int c){
    printf("\n The sum is %d", a+b+c);
}