#include <stdio.h>
/**
 * prints all natural numbers from n to 98
 * Numbers must be separated by a comma, followed by a space
 * @n: the number entered
 */
void print_to_98(int n)
{
	if(n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
