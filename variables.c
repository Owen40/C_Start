#include <stdio.h>

int main() {
	int a = 1;
	int b = 0;

if (a && b) {
	printf("a && b is true \n");
} else {
	printf("a && b is false \n");
}

if (a || b) {
	printf("a || b is true \n");
} else {
	printf("a || b is false \n");
}

if (!a) {
	printf("!a is true \n");
} else {
	printf("!a is false \n");
}

if (!b) {
	printf("!b is true \n");
} else {
	printf("!b is false \n");
}

return 0;
}

