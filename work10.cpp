#include<stdio.h>
int main()
{
	int i;
	int b;
	int c;
	int length = 10;
	int wide = 10;
	for ( i = 1; i <= length; i++ )
	{
		for ( b = 0; b < wide - i; b++ )
		{
			printf(" ");
		}
		for ( c = 0; c < i; c++ )
		{
			printf("%s","*");
		}
		printf("\n");
	}
	return 0;
}

