#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9\n
 *
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char c:

		for (c = '0'; c <= '9'; c++)
		{
			if (!(c == '2' || c == '9'))

				_putchar(c);
		}
	_putchar('\n)
}
