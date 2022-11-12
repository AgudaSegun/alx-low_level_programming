#include "main.h"
/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */
lines (22 sloc)  436 Bytes
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	cr = malloc(sizeof(c) * size);
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
