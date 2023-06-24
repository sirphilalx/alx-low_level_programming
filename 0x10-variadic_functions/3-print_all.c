#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list chara);
void print_int(va_list arg);
void print_float(va_list flo);
void print_string(va_list string);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @chara: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list chara)
{
	char letter;

	letter = va_arg(chara, int);
	printf("%c", letter);
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @flo: A list of arguments pointing to
 *       the float to be printed.
 */
void print_float(va_list flo)
{
	float num;

	num = va_arg(flo, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @string: A list of arguments pointing to
 *       the string to be printed.
 */
void print_string(va_list string)
{
	char *str;

	str = va_arg(string, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
