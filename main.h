#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
  * struct flags - struct containing flags to activate
  * when a flag specifier is passed to _printf
  * @plus: flag for the character '+'
  * @space: flag for the character ' '
  * @hash: flag for the character '#'
  *
  */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
  * struct printHandler - struct to choose the right function depending
  * on the format specifier passed to the function _printf
  * @c: format specifier
  * @f: pointer to the correct printing fucntion
  */

typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* print_nums */
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/* _printf */
int _printf(const char *format, ...);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_percent */
int print_percent(va_list l, flags_t *f);

#endif
