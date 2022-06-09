#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer
 *
 * Return: minutes
 */
void jack_bauer(void)
{
	int hour, minutes;

	hour = 0;
	while (hour < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar("\n");
		}
	}
}
