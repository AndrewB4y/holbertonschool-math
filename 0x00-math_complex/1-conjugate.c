#include "holberton.h"

/**
 * conjugate - function that returns the conjugate of a complex number
 * 
 * @c: complex number to conjugate.
 * 
 * Return: complex number structure with the conjugate of @c
 */

complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
