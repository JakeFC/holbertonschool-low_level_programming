/**
 * print_last_digit - prints the last digit of a number
 * @a: is input
 * Return: absolute value of last digit of a
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		b = (a % 10) * -1;
	}
	else
	{
		b = a % 10;
	}

	_putchar(b + '0');
	return (b);
}
