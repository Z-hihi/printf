#include "main.h"
/**
 * print_cent - prints character % to stdout
 * @args: variadic parameter
 * Return: number of characters
 */
int print_cent(va_list args)
{
	char c ;
	(void)args;

	c = '%';
	return (write(1, &c, 1));
}
