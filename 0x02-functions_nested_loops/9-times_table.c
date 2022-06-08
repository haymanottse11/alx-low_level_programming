#include "main.h"
/**
 * times_table- prints the 9 times table, starting with 0
 *
 * return: void
 */
void times_table(void)
{
	int n, mult, prod;

	for (n = 0; n <= 9; n++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = mult * n;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			 _putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
