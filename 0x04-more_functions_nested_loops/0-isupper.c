/**
 * _isupper - Checks if argument is uppercase
 *
 * @c: character to use for comparison
 *
 * Return: returns 1 if c is uppercase, 0 if not
 */


int		_isupper(int c)
{
	c = (unsigned char)c;
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}
