#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - everytime it is executed it generate a random number,
 * determine if it is greater than 0 or less than 0 or it it is  0.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the code is*/
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
