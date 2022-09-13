#include "main.h"

/**
 * main - the program prints out alphabet ten times followed by new line
 * Return: function returns 0
 */
void print_alphabet_x10(void)
{
	int i; ch;
	ch = 0;

	while (i < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		ch++;
		_putchar('\n');
	}
}
