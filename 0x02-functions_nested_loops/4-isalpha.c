/**
 * _isalpha - checks for a letter
 * @c: character to check
 * Return: 1 or 0, if letter or not
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
