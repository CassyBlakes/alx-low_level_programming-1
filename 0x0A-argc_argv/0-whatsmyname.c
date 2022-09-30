#include <stdio.h>

/**
* main - the program prints it's name and self update
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: It returns 0 if success
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
