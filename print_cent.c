#include "main.h"
/**
 * print_cent - prints character % to stdout
 * @args: variadic parameter
 * Return: number of characters
 */
int print_cent(va_list args)
{
	(void)args;

	return (write(1, "%", 1));
}
