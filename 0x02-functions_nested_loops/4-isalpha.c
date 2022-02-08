#include "main.h"

/**
 * _isalpha - Compares argument with ascii values
 *	@c: variable to compare
 * Return: 1 if c is an alphabetical value 0 if not
 */

int		_isalpha(int c)
{
	c = (unsigned char)c;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
