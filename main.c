#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - test file
 * Program starts execution from here
 * Return: 0
 */
int main(void)
{
	int count_std = 0, count_hmd = 0, count_cent = 0;

	write(1, "STANDARD:\n", 10);
	count_std = _printf("My favorite color is %s\n", "blue");
	_printf("there is %d character in the previous sentence\n", count_std);
	write(1, "STANDARD:\n", 10);
	count_hmd = _printf("The first letter of my name is: %c", 'Y');
	 _printf("there is %d character in the previous sentence\n", count_hmd);
	count_cent = _printf("100%\n");
	_printf("there is %d character in the previous sentence\n", count_cent);
	return (0);
}
