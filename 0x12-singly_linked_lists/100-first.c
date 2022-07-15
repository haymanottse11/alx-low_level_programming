#include <stdio.h>
#include <stdlib.h>
/**
 * hare - prints before main.
 */
void __attribute__((constructor)) hare()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
