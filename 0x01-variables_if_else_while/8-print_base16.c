#include <stdio.h>

/**
 * main - main point
 *
 * Description: description here
 * Return: success (0)
 */
int main(void)
{
	int n;
	char ch;

	n = 48;
	while (n <= 58)
	{
		putchar(n);
		n++;
	}
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
