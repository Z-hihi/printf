#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);

/**
 * struct func - struct
 * @t: character
 * @f: function
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_int(va_list);
int print_dec(va_list);
int _write_char(char c);
int print_binary(va_list list);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
char *rev_string(char *s);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int hex_check(int num, char x);
int unsigned_integer(va_list);
int rot13(va_list);
int print_reversed(va_list arg);
int print_unsgined_number(unsigned int);
#endif
