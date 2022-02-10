/**
 * _isdigit - Checks if argument is a digit
 *
 * @c character to use for comparison
 *
 * Return: returns 1 if c is a digit, 0 if not
 */


int		_isdigit(int c)
{
	c = (unsigned char)c;
	return (c >= '0' && c <= '9' ? 1 : 0);
}
