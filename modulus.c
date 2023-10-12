#include <stdio.h>

int main() {
	int num1, num2, modulus;
	
	printf("Enter The first numer: \n");
	scanf("%d", &num1);
	
	printf("Enter the second number: \n");
	scanf("%d", &num2);
	
	if(num2 == 0) {
		printf("Error! Division by zero is not allowed. \n");
	} else {
		modulus = num1 % num2;
		printf("The modulus of %d and %d is %d. \n", num1, num2, modulus);
	}
	
	return 0;
}
