#include "main.h"

/**
 * pritn_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void pritn_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
