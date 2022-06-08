#include "main.h"
#include "ctype.h"

/**
 * _islower - checks if a character is in lower case
 *
 * @c - character to be checked
 *
 * Return: 1 if character is lowercase 0 if otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
