#include "main.h"

/**
 * _puts _recursion - print a string followed by a new line
 * @S: the string to print
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
