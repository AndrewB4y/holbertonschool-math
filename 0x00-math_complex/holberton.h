#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_


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


void display_complex_number(complex c);

#endif