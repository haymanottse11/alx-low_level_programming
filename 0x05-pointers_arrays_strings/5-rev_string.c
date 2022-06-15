#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, i, j;
	char tmp;

	while (*(s + len) != '\0')
	{
		len++;
	}
	j = len;
	len--;
	for (i = len - 1; i <= j / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = tmp;
	}
}
