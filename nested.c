#include <stdio.h>
int main() {
    int mark;
    printf("Enter the student mark \n");
    scanf("%d", &mark);
    if (mark >= 70 && mark <= 100)
    {printf("The grade is A \n");} 
    else if (mark >= 60 && mark < 70) 
    {printf("The grade is B \n");}
    else if (mark >= 50 && mark < 60)
    {printf("The grade is C \n");}
    else if (mark >= 40 && mark < 50)
    {printf("The grade is D \n");}
    else if (mark >= 0 && mark < 40)
    {printf("The grade is E \n");}
    else {printf("Invalid mark \n");}
    return 0;
}