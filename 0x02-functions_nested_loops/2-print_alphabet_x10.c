#include "main.h"

/**
 * main - the program prints out alphabet ten times followed by new line
 * Return: function returns 0
 */
void print_alpabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
