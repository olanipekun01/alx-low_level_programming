#include "main.h"

/**
 * print_sign - print the sign of the number 
 *
 * @n: the number to check
 *
 * Return: 1 if number is positive, -1 if number is negative, 0 if number is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
