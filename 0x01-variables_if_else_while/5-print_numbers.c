#include <stdio.h>

/**
 * main - program that print all single digit numbers of base 10 startin from 
 * All your code should be in the main function
 * Return: 0
 */

int main(void)
{
	int n;
	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	printf("\n");
	return (0);
}
