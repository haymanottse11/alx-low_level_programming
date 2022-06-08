#include"main.h"
/**
 * the program returns lowercase alphabets ascendingly
 * allowed to use _putchar 2X maximum
(*
 * return 0 on success
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	
		_putchar(letter);
	
	_putchar("\n");
}

