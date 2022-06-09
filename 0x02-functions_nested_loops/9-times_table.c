#include "main.h"

/**
 * times_table - printing9 timestable
 *
 * Return: times table value
 */
void times_table(void)
{
	int n, j;

	n = 0;
	while (n <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = n * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		n++;
	}
}
