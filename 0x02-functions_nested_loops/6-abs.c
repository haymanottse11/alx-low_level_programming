#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: integer whose absolute value to find
 *
 * Return: n if the number is grear than or equals with 0,
 *        -n if the number is less than 0.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}

