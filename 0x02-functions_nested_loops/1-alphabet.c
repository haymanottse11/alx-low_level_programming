#include "main.h"
/**
 * print_alphabet -prints the alphabet, in lowercase, followed by a new line
 * allowed to use _putchar 2X maximum
(*
 * return 0 on success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

