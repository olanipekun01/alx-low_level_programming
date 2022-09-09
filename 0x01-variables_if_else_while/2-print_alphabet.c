#include <stdio.h>

/**
 * main - Main point
 * Description: Description goes here
 * Return: Return (0) success
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
