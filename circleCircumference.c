#include <stdio.h>
#include <math.h>

/*
	Program to calculate the circumference of a circle
*/

int main() {
	const double PI = 3.14159;
	double radius;
	double circumference;
	double Area;

	printf("Enter radius of the circle: ");
	scanf("%lf", &radius);

	circumference = 2 * PI * radius;
	//Area = PI * radius * radius;
	Area = PI * pow(radius, 2);

	printf("The circumference of your circle is: %lf\nThe Area of the circle is: %lf\n", circumference, Area);
	return 0;
}
