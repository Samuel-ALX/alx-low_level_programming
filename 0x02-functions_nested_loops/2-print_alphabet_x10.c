#include "main.h"

/**
 * main - function that prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Succees)
 */

void print_alphabet_x10(void)
{
	char alp;
	int i;

	for (i = 1; i <= 10; i++)

	{
	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);

			_putchar('\n');
	}
}
