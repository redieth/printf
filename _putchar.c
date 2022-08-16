#include <unistd.h>
/**
 * _putchar - writes onto the standard output
 * @c: the character
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
