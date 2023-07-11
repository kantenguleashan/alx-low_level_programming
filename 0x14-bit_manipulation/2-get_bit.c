#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
 * @index: begin from 0 index
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int stick;

	if (index > 64)
		return (-1);

	stick = n >> index;

	return (stick & 1);
}


