#include "main.h"
/**
 * jack_bauer - print time
 *
 *Description: print the time in min. for 24 hours clock
 *
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');

		}
	}
}
