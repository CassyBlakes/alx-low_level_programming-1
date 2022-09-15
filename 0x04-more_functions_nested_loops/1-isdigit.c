#include "main.h"

/**
 * _isdigit - checks for the presence of a digit in the program
 * @c: this is the character to be checked
 * Return: the program returns 1 if c is a digit, else it returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
