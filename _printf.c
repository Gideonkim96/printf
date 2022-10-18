#include "main.h"

/**
 *   _printf - printf function
 *   @format: string with format specifier
 *   Return: get number of characters
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int i;
		int count = 0;
		int (*m)(va_list);
		va_list args;

		va_start(args, format);

		i = 0;
		if (format[0] == '%' && format[i] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i = i + 2;
				}
				else
			       	{
					m = get_func(format[i + 1]);
					if (m)
					{
						count = count + m(args);
					}
					else
					{
						count = _putchar(format[i] + _putchar(format[i + 1]);

					}
					i = i + 2;

				}
			}
			else
			{
			 count += _putchar(format[i]);
			 i++;
			}
		}
		va_end(args);
		return (count);
	}
	return (-1);
}
