#include "main.h"

/**
 * _islower - Compares argument with lowercase ascii values
 *	@c: variable to compare
 * Return: 1 if c is lowercase 0 if not
 */
int		_islower(int c)
{
	c = (unsigned char)c;
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
