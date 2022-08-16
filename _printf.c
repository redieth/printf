#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _print_char - print a character
 * @args: argument
 * Return: int
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * _print_str - print a string
 * @args: argument
 * Return: int
 */
int _print_str(va_list args)
{
	int k = 0;
	char *s = va_arg(args, char *);

	while (s[k] != '\0')
	{
		_putchar(s[k]);
		k++;
	}
	return (0);
}

/**
 * _print_int - print an integer
 * @args: argument
 * Return: int
 */
int _print_int(va_list args)
{
	int n = va_arg(args, int);

	return (0);
}

/**
 * _select_func - selects a function
 * @c: character
 * Return: pointer
 */
int (*_select_func(char c))(va_list)
{
	if (c == 'c')
		return (_print_char);
	if (c == 's')
		return (_print_str);
	if (c == 'd')
		return (_print_int);
	return (NULL);
}

/**
 * _printf - print a string
 * @format: the string
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, k = 0, num = 0;
	char *str = NULL;
	int n_displayed = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			_select_func(format[i + 1])(args);
			i++;
			n_displayed++;
		}
		i++;
	}
	va_end(args);
	return (n_displayed);
}
