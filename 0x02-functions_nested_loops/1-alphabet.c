#include<stdio.h>
#include"main.h"
/**
 * the program returns lowercase alphabets ascendingly
 * allowed to use _putchar 2X maximum
(*
 * return 0 on success
 */
void print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar("/n")
}

int main(void)
{
	print_alphabet();
	
	return (0);
}
