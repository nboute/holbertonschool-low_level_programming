/**
 * check_palindrome - Computes if string is a palindrome recursively
 * @s: String to check
 * @i: position of character to check
 * @len: length of s
 * Return: 1 if @s is a palindrome, 0 if not
 */
int	check_palindrome(char *s, int i, int len)
{
	if (i >= len / 2)
		return (1);
	if (s[i] == s[len - 1 - i])
		return (check_palindrome(s, i + 1, len));
	return (0);
}

/**
 * _strlen_recursion - Counts string length recursively
 * @s: string
 * Return: Length of @s
 */
int	_strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Tells if string is a palindrome
 * @s: String to check
 * Return: 1 if @s is a palindrome, 0 if not
 */
int	is_palindrome(char *s)
{
	int	len;

	len = _strlen_recursion(s);
	return (check_palindrome(s, 0, len));
}
