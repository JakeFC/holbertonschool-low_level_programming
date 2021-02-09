/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	char a;
	char b;

	b = 0;
	while (b <= 9)
	{
		a = 'a';
		while (a <= 'z')
		{
		_putchar(a);
		a++;
		}
	_putchar('\n');
	b++;
	}
}
