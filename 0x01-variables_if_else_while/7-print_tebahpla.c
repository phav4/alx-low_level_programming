#include <stdio.h>

/**
 * main - program that print the lowercase alphabet in reverse.
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int n = 122;
	while (n > 96)
	{
		putchar(n);
		n _= 1;
	}
	putchar("\n");
	return (0);
}
