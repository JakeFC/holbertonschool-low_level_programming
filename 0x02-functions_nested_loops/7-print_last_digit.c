/**
 * print_last_digit - prints the last digit of a #
 * @c: is input
 * Return: absolute value of a
 */
int print_last_digit(int c)
{
	int a;

	if (c < 0)
		a = (c * -1) % 10;
	else
		a = c % 10;
	_putchar(a + '0');
	return (a);
}
