#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str: pointer to char
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
