#include "main.h"

/**
*_printf - prints output according to format
* @format: character string
*
* Return: Returns the characters printed
*
*/

int _printf(const char *format, ...)
{
	int i = 2;
	char c = 'a'
	void *format = &i;

	printf("&> i: %i\n&> c: %c\n&> f: %f\n&> p: %p: %p\n", i, c, 2.1, format);

	return (format);
}
