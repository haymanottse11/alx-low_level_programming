#include <stdio.h>
/**
 * main - printout the alphabets in lowercase not allowed
 * to use printf or puts, and use putchar 2X maximum
(* 
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a'; 

	while (c <= 'z')  
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return(0);
}
