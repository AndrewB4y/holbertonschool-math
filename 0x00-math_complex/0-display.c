#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - function that displays the complex numbers,
 *                          followed by a new line.
 * @c: structure variable for a complex number to be displayed.
 *
 * Return: void
 */


void display_complex_number(complex c)
{

	if (c.re != 0 && c.im != 0)
	{
		printf("%f + %fi\n", c.re, c.im);
		return;
	}

	if (c.re != 0)
		printf("%f", c.re);

	if (c.im != 0)
		printf("%fi", c.im);

	printf("\n");
}
