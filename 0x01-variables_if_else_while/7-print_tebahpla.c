#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse without using printf/puts,
 * and putchar 2x max
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
