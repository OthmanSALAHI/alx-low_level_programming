#include <stdio.h>
/**
* main - fibonacci numbers
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long int fib[50];
	int i;

	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%lu", fib[i]);
		if (i == 49)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}
	}
	return (0);
}
