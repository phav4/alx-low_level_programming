#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - print 0s into 2D grid
 * @nmemb: array num
 * @size: size of ea array element
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
