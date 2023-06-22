nclude "main.h"

/**
 * print_diagonal- prints a diagonal line
 * @n: length of line
 * Return: void
 */
void print_diagonal(int n)
{
	int cpt, space_num = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		cpt = space_num;
		while (cpt > 0)
		{
			_putchar(' ');
			cpt--;
		}
		_putchar('\\');
		n--;
		space_num++;
	}
}
