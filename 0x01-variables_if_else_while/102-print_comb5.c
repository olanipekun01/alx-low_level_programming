#include <stdio.h>

/**
 * main - main point
 *
 * Description: description here
 * Return: return success (0)
 */
int main(void)
{
	int m, n, o, p;

	m = 0;
	while (m <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			o = 0;
			while (o <= 9)
			{
				p = 0;
				while (p <= 9)
				{
					if (o != 0 || p != 0)
					{
						putchar(m + '0');
						putchar(n + '0');
						putchar(' ');
						putchar(o + '0');
						putchar(p + '0');
					}
					if (p >= 1 || o >= 1)
					{
						putchar(',');
						putchar(' ');
					}
					p++;
				}
				o++;
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
