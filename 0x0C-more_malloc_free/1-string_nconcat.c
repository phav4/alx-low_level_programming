#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	l1 = 0, l2 = 0;
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	if (n < l2)
		l2 = n;

	s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < l1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = l1; i < l2; j++, i++)
		*(s + j) = *(s2 + i);

	*(s + j) = '\0';

	return (s);
}
