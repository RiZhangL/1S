/*#include<stdio.h>
void main()
{
	float x, y;
	int i = 5, j = 2;
	x = i / j;
	y = (float)i / j;
	printf("x = %f\n y=%f\n", x, y);
	
}

#include<stdio.h>
int main()
{
	int x, y, m;
	printf("Please input x and y\n");
	scanf("%d%d", &x,&y);
	m = x*y;
	printf("%d*%d = %d\n", x, y, m);
}
*/
#include<stdio.h>
float max(float x, float y);
int main()
{
	float x, y, c;
	printf("Please input x and y:\n");
	scanf("%f%f", &x, &y);
	c = max(x, y);
	printf("Mxa od £¨%f£¬%f) is %f", x, y, c);
	return 0;
}
float max(float x,float y)
{
	return x > y ? x : y;
}