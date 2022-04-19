#include "main.h"

/**
 * print_non_printable - Print string with non-printable charaters
 * @list: list.
 *
 * Return: String length.
 */

int print_non_printable(va_list list)
{
	char *p;
	int p_len;

	p = va_arg(list, char*);
	p_len = _print((p != NULL) ? p : "(null)");

	return (p_len);
}

/**
 * _print - print char.
 * @str: string.
 *
 * Return: string length.
 */
int _print(char *str)
{
	int i, j;
	int count = 0;
	char *buff;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (((str[i] > 0 && str[i] < 32) || str[i] >= 127))
		{
			print("\\x");
			buff = itoa(str[i], 16);
			if (str[i] < 17)
				_putchar('0');
			for (j = 0; buff[j] != '\0'; ++j)
			{
				if (buff[j] >= 97)
					_putchar(buff[j] - 32);
				else
					_putchar(buff[j]);
			}
			count += 2;
			count += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count += 1;
		}
			
	}

	return (count);
}
