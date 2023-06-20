#include <stdio.h>
/**
 * main - program print "_putchar" 
 *
 * Return : Always 0.
 */

int main(void)
{
	char string[]="_putchar";
	char word;
	for(word = 0 ; word =< 8 ; word++)
	{
		_putchar(string[word]);
	}
	_putchar('\n');
	return 0;
}
