#include <stdio.h>
#include <stdlib.h>

// 1-1
void func1_1()
{
	printf("\t\t\t\t*\n");
	printf("\t\t\t\t*\n");
	printf("\t\t*****************\n");
	printf("\t\t*\t\t*\t\t*\n");
	printf("\t\t*\t\t*\t\t*\n");
	printf("\t\t*****************\n");
	printf("\t\t\t\t*\n");
	printf("\t\t\t\t*\n");
	printf("\t\t\t\t*\n");
	printf("\t\t\t\t*\n\n");

	printf("\t\t\t\t*\n");
	printf("\t\t\t\t*\n");
	printf("\t\t\t\t*\n");
	printf("\t\t\t\t*\n");
	printf("\t\t*\t\t*\t\t*\n");
	printf("\t\t*\t\t*\t\t*\n");
	printf("\t\t*\t\t*\t\t*\n");
	printf("\t\t*\t\t*\t\t*\n");
	printf("\t\t*\t\t*\t\t*\n");
	printf("\t\t*****************\n");
}

// 1-2
#define PI 3.14
#define SQRT3 1.73
void func1_2()
{
	printf("The area of the triangle is: %f.\n", 5 * SQRT3 * 5 / 2 / 2);
	printf("The area of the square is: %f.\n", 5.0 * 5);
	printf("The area of the circle is: %f.\n", PI * 9 * 9);
	printf("The volume of the cube is: %f.\n", 5.0 * 5 * 5);
	printf("The volume of the cylinder is: %f.\n", PI * 9 * 9 * 9);
}

int main()
{
	func1_1();
	func1_2();
	return 0;
}
