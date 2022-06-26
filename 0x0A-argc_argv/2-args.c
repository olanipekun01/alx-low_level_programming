#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count to number the arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
