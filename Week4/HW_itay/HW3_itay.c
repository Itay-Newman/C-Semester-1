#include <stdio.h>
int main()
{
	float radius;
	float pi = 3.14;
	
	printf("please enter the radius of the sphere: ");
	scanf("%f", &radius);
	
	float volumeOfSphere = (4.0/3.0) * pi * radius * radius * radius;
	
	printf("the radius you entered is: %f\n", radius);
	printf("the volume of the sphere is: %f", volumeOfSphere);
	
	return 0;
}
