#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int ash;
	int move;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (ash = n, move = 0; (ash >>= 1) > 0; move++)
		;

	for (; move >= 0; move--)
	{
		if ((n >> move) & 1)
			printf("1");
		else
			printf("0");
	}
}

