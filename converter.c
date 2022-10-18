#include "main.h"

/**
 *   convert - converts number and base into string
 *   @num: input number
 *   @base: input base
 *   @lowercase: flag for lowercase
 *   Return: string output
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	char *ptr;
	static char *rep;
	static char buffer[50];

	rep = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do
	{
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
