#include <stdio.h>

int main() {
	int a = 10;
	int *q;
	q = &a;
	
	printf("Value of q = %d \n", q);
	printf("value of a = %d \n", a);
	printf("value of *q = %d \n ", *q);
	
	return 0;
}
