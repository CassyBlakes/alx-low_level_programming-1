#include "main.h"

/**
 * main - the program prints out alphabet ten times followed by new line
 * Return: function returns 0
 */

void print_alphabet_x10(void)
{
	int i;
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		for (i = 97; i <= 122; i++) 
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
