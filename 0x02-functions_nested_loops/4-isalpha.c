#include "main.h"
/**
 * _isalpha(int) function returns 1 if c is lowercase or uppercase alphabet
 * else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z'))
		return (1); 
	else
		return (0);
}
