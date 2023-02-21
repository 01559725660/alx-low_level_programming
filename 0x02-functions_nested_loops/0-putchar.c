#include "hoberton.h"
#include <stdio.h>

/**
 * _putchar - printwrites the character c to stdout
 * @c: The character to print.
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
