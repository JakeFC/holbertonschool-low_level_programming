/**
 * _abs - prints the absolute value of an int
 * @c: is input
 * Return: the absolute value of int
 */
int _abs(int c)
{
	int a;

	if (c < 0)
		a = (c * -1);
	else
		a = c;
	return (a);
}
