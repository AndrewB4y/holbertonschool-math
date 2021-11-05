#include "holberton.h"

/**
 * modulus - function that returns the modulus, or the absolute value,
 *			 or the magnitud of a complex number.
 * @c: complex number to get the magnitud from.
 *
 * Return: double variable with the magnitude of @c
 */

double modulus(complex c)
{
	double modulus = 0;

	modulus = pow(c.re, 2) + pow(c.im, 2);
	modulus = sqrt(modulus);

	return (modulus);
}
