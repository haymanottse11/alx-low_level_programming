#include "main.h"
/**
 * jack_bauer- prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hr, mint;

	for (hr = 0; hr <= 23; hr++)
	{
		 for (mint = 0; mint <= 59; mint++)
		 {
			 _putchar((hr / 10) + '0');
			 _putchar((hr % 10) + '0');
			 _putchar(':');
			 _putchar((mint / 10) + '0');
			 _putchar((mint % 10) + '0');
			 _putchar('\n');
		 }
	}
}
