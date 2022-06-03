#include <stdio.h>
/**
 * main - printout the alphabets in lowercase
(*
 *Return: 0 on success
 */
int main(void)
{
	char ch = 'a'; 

	putchar("Lowercase English Alphabets:\n");
	while(ch <= 'z')  
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
