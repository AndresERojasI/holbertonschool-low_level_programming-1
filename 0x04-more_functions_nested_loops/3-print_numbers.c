#include "holberton.h"

/**
 *print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *Return: void
 */

void print_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		_putchar (c);
		c++;
	}
	_putchar('\n');
}
