#include <stdio.h>

int computeSum(int array[10]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size =sizeof(numbers) / sizeof(numbers[0]);
    int sum = computeSum(numbers, size);

    printf("The sum of the ten numbers is: %d \n");

    return 0;
}
