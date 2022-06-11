#include "main.h"
/**
 * print_diagonal -a function that draws a diagonal line on the terminal.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int lin, i;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
		{
			for (i = 0; i < lin; i++)
				_putchar(' ');
			_putchar('\\');

			if (lin == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
