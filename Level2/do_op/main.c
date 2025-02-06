#include "main.h"

int do_op(int first_val, char operator, int second_val)
{
	int total;

	if(operator == '+')
	{
		total = first_val + second_val;
	}
	else if(operator == '-')
	{
		total = first_val - second_val;
	}
	else if(operator == '*')
	{
		total = first_val * second_val;
	}
	else if(operator == '/')
	{
		total = first_val / second_val;
	}
	else if(operator == '%')
	{
		total = first_val % second_val;
	}
	return (total);
}

int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		int first_val = atoi(argv[1]);
		int second_val = atoi(argv[3]);
		int value = do_op(first_val, argv[2][0], second_val);
		printf("%i", value);
	}
	printf("\n");
	return (0);
}