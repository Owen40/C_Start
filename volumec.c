#include <stdio.h>
int main() {
	const float pi = 3.142;
	float radius, height, volume;
	printf("Enter the radius of the cylinder: \n");
	scanf("%f", &radius);
	printf("Enter the height of the cylinder: \n");
	scanf("%f", &height);
	volume = pi * radius * radius * height;
	printf("The volume of the cylinder is %f \n", volume);
	return 0;
}
