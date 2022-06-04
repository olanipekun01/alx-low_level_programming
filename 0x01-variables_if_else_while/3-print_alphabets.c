#include <stdio.h>

/**
 * main - main point
 *
 * Description - Description here
 * Return: Return success (0)
 */
int main(void)
{
	int ch;
	
	ch = 'a';
	while (ch <='z')
	{
		putchar(ch);
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
