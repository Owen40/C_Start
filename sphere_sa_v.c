#include <stdio.h>
#define pi 3.142
int main() {
	float radius;
	float surface_area, volume;
	printf("Enter tha radius of the sphere: \n");
	scanf("%f", &radius);
	surface_area = 4 * pi * radius * radius;
	volume = (4/3)*pi*radius*radius*radius;
	printf("\n surface area of sphere is: %f", surface_area);
	printf("\n The volume of sphere is: %f", volume);
	return 0;
}
