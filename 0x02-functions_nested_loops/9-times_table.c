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
			_putchar((n * j) + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		n++;
	}
}
