#include "main.h"
/**
 * _isupper- check and print upperchase alphabets
 * @c - any character to be checked
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
