#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @n: integer whose last digit we want to find
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	n = abs(n);
	int last_digit = n % 10;

	return (last_digit);
}

