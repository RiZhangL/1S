#include<stdio.h>
int main()
{
	double input1;
	double input2;
	char fuhao;
	double output,output4;
	int output1,output2,output3;
	printf("Please input data1 op data2:");
	scanf("%lf%c%lf", &input1, &fuhao, &input2);
	if (fuhao == '+')
	{
		output = input1 + input2;
		printf("\n%lf\n", output);
	}
	if (fuhao == '-')
	{
		output = input1 - input2;
		printf("\n%lf\n", output);
	}
	if (fuhao == '*')
	{
		output = input1 * input2;
		printf("\n%lf\n", output);
	}
	if (fuhao == '%')
	{
		if (input2 == 0)
		{
			printf("\nError! chu shu wei 0.\n");
		}
		else
		{
			output1 = input1;
			output2 = input2;
			output = output1 % output2;
			printf("\n%lf\n", output);
		}
	}
	if (fuhao == '/')
	{
		if (input2 == 0)
		{
			printf("\nError! chu shu wei 0.\n");
		}
		else
		{
			output = input1 / input2;
			output = output * 100;
			output1 = output;
			output4 = output1;
			output = output4 / 100;
			printf("\n%lf\n", output);
		}
	}
    return 0;
}

