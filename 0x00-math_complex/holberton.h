#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* Libraries */
#include <stdio.h>
#include <math.h>

/* Globals and Structures*/
/**
 * struct complex - complex number structure
 * @re: real part of the complex number
 * @im: imaginary part of the complex number
 */

typedef struct complex_s
{
    double re;
    double im;
} complex;

/* Prototypes */

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);

#endif /* _HOLBERTON_H_ */