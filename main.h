#ifdef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

/*
 * struct specifier
 * @flag: the flag
 * @f: pointer associated function
 */

typedef struct specifier
{
	char *flag;
	int (*f)(va_list);
} specs;


/* printf */
int _printf(const char *format, ...);

/* write funcs */
int _putchar(char c);
int _puts(char *str);

/* print nums */
int print_int(va_list l, specs *f);
void print_number(int n);
int print_unsigned(va_list l, specs *f);
int count_digit(int i);

int (*get_func(char x))(va_list args);
#endif
