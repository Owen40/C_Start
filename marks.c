#include <stdio.h>

int main() {
    int marks[5];
    int i, total = 0;
    float average;

    // get the marks from the user
    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = (float)total / 5;

    printf("\n\nStudent Report\n");
    printf("Subject Marks Cumulative Sum Average\n");

    for(i = 0; i < 5; i++) {
        printf("%-6d %-6d %-12d %-6.2f\n", i+1, marks[i], total, average);
        total -= marks[i];
    }

    return 0;
}