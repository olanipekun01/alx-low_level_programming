#include "main.h"

/**
 * print_alphabet - function prints alhabet in lower case
 *
 * Description: description goes here
 * Return: success (0)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
