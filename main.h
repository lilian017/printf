#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stddef.h>


#define UNUSED(x)
#define BUFF_SIZE 1024

struct format
{
	char format;
	int (*fn)(va_list, char[], int, int, int, int)
typedef struct format format_t;


int _putchar(char c);
int _printf(const char *format, ...);
int printf_int(va_list types, char buffer[], int flags, int width, int precision, int size);
long int convert_size_number(long int n, int size);

#endif
