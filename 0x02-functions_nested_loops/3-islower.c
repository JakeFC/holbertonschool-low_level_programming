/**
 * _islower - checks for lowercase
 * Return: 1 or 0, if lower or not
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
