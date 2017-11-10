#include<stdio.h>
int main()
{
	int input = 0;
	int number = 0; 
	int sum = 0;
	int i;
	scanf("%d", &input);
	for (i = 0; i < input; i++)
	{
		scanf("%d", &number);
		sum = sum + number;
	}
	printf("%d",sum);
	return 0;
}

