#include <stdio.h>
#include "main.h"

/**
 * main - This scripts pring putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; x[i]; i++)
		_putchar(x[i]);

	_putchar('\n');

	return (0);
}
