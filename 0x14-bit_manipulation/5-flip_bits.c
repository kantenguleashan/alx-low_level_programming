#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int add;

	diff = n ^ m;
	add = 0;

	while (diff)
	{
		add++;
		diff &= (diff - 1);
	}

	return (add);
}


