#include <stdio.h>
#include "main.h"

/**
* rev_string - the function prints a reverse string
* @s: the string to be reversed
* Return: returns nothing
*/
void rev_string(char *s)
{
	int i, j;
	int c = 0;
	char revString[1000];

	for (i = 0; 1 ; i++)
	{
		if (s[i] == 0)
			break;
		c++;
	}
	i = 0;
	for (j = c - 1; j >= 0; j--)
	{
		revString[i] = s[j];
		i++;
	}
	for (i = 0; 1 ; i++)
        {
		if (revString[i] == 0)
			break;
		s[i] = revString[i];
        }
}
