#include "holberton.h"

/**
 * substraction - Performs the substraction operation to complex numbers
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Subtraction of c1 and c2
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}