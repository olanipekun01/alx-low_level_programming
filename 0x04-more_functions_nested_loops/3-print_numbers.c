#include main.h

/**
 * print_numbers - print numbers from 0-9
 * Return: void
 */
void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		printf("%d", c);
	}
	printf("\n");
}
