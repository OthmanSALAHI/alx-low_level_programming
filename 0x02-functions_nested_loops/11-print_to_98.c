#include"main.h"
/**
 * print_to_98 - it prints till 98
 * @n: Check the input
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("98");
	} else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
	} else if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d ,", i);
		}
	}
}
