#include <stdio.h>

/**
 * main - main description
 *
 * Description: Description here
 * Return: success (0)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++
	}
	putchar('\n');
	return (0);
}
