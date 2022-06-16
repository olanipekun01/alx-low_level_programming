#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (src[a])
	{
		a++;
	}
	for (b =  0; (b < n && src[b]); b++)
	{
		dest[b] = src[b];
	}
	while (b < n)
	{
		dest[b] = '\n';
		b++;
	}
	return (dest);
}
