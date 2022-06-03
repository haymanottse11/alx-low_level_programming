#include<stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * not allowed to use printf or puts
 * allowed to use putchar 4X maximum 
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
        while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
