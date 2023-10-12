#include <stdio.h>
int main() {
	char ch;
	
	while(1) {
		printf("Enter a character: ");
		scanf(" %C", &ch);
		printf("The ASCII value of %C is %d. \n", ch, ch);
	}
	
	return 0;
}
