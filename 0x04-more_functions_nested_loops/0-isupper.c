#include "main.h"

/**
 * _isupper - This checks if the character is uppercase
 * @c: this is the character to be checked
 * Return: the program returns 0 if lower and 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
