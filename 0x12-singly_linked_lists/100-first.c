#include <stdio.h>
/**
 * hare - prints before main.
 */
void __attribute__((constructor)) hare(void);
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
