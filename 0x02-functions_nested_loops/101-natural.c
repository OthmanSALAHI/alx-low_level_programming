#include <stdio.h>
/**
 * main - the sum of the multiple of 3 and 5
 *		bellow 1024 .
 * Return: Always return 0.
 */
int main(void)
{
	unsigned long int sm3, sm5, sm;
	int i;

	sm3 = 0;
	sm5 = 0;
	sm = 0;
	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sm3 = sm3 + i;
		} else if ((i % 5) == 0)
			sm5 = sm5 + i;
		}
	}
	sm = sm3 + sm5;
	printf("%lu\n", sm);
	return (0);
}
