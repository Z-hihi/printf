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
	int count_std = 0, count_hmd = 0;

	write(1, "STANDARD:\n", 10);
	count_std = _printf("My favorite color is %s\n", "blue");
	write(1, "STANDARD:\n", 10);
	count_hmd = _printf("The first letter of my name is: %c", 'Y');
	_printf("100%");

	return (0);
}
