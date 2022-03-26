#include "holberton.h"

/**
 * division - Performs the division operation to complex numbers
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Division of c1 and c2
 */
void division(complex c1, complex c2, complex *c3)
{
	double a = c1.re, b = c1.im;
	double c = c2.re, d = c2.im;

	c3->re = ((a * c) + (b * d)) / (pow(c, 2) + pow(d, 2));
	c3->im = ((b * c) - (a * d)) / (pow(c, 2) + pow(d, 2));
}
