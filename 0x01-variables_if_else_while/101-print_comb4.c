#include <stdio.h>

/**
 * main - main point
 *
 * Description: description here
 * Return: success (0)
 */
int main(void)
{
	int m, n, o;

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (o = 48; o <= 57; o++)
			{
				if (o > n && n > m)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
