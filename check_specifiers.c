#include "main.h"
/**
 * check_specifier - checks that a character is a valid specifier and
 * assigns an appropriate function for its printing
 *@format: the specifier
 *Return: pointer to function (Success), NULL(fails)
 */
int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[7] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_dec},
		{"i", print_int},
		{"b", print_binary},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{"r", print_reversed},
		{"R", rot13},
		{NULL, NULL}};
	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}
	return (NULL);
}
