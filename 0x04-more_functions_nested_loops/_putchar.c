#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character
 * @c The character to print
 *
 * Return success
 * on error, -1 is returned and errno is appropriately
 */
int	_putchar(char c)
{
	return	(write(1,	&c,	1));

}

