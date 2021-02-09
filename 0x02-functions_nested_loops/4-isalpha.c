/**
 * _isalpha - checks for uppercase
 * @c: character to check
 * Return: 1 or 0, if lower or not
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
