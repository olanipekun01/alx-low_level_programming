#include "main.h"

/**
 * print_alphabet_x10 - function prints all numbers * 10
 *
 *
 */
void print_alphabet_x10(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch * 10);
	}
	_putchar('\n');
}
