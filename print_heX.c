#include "main.h"
#include <stdio.h>
/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_heX(va_list list)
{
	unsigned num;
	int len, rem_num;
	char *hex_rep, *rev_hex;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}
