#include<stdio.h>
int main()
{
	double radius, area, perimtr;
	radius = 10;
	area = 3.14*radius*radius;
	perimtr = 2.0 * 3.14159*radius;
	printf("area=%lf\n", area);
	printf("perimtr=%lf\n", perimtr);
	return 0;
}