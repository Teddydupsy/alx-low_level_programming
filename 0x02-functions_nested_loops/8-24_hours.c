#include "main.h"
/**
 * jack_bauer - Print every minute from 00:00 to 23:59
 * Every minute of Jack Bauer day
 */
void jack_bauer(void)
{
	int min, hour;
	
	hour = 0;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hour/10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
