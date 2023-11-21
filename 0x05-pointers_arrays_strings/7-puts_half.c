#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: void.
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
