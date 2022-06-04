#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 *not allowed to use printf or puts,and use putchar 3X maximum
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
