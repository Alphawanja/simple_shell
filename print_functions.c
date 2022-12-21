#include "shell.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character
 *
 * Return: 1 on success else -1 and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_s - prints a string
 * @s: string to be printed
 *
 * Return: number of characters printed
 */
int print_s(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		_putchar(s[j]);
		j++;
	}
	return (j);
}
