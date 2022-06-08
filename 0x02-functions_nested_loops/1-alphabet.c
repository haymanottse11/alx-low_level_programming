#include "main.h"
/**
 * the program returns lowercase alphabets ascendingly
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

