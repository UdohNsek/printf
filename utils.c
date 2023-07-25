#include "main.h"

/**
 * is_printable - Gotten if a char is printable
 * @c: Character to be evaluated.
 *
 * Return:  0 
 */
int is_printable(char c)
{
	if (a >= 32 && a < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascci in hexadecimal code
 * @buffer: Array of char.
 * @i: Index start to append.
 * @ascii_code: ASSCI CODE.
 * Return: 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - cross check if the char is a digit
 * @c: Char to evaluate
 *
 * Return: 0 
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Cast number to exact size
 * @num: number to  cast.
 * @size: number indicating the type.
 *
 * Return: Casted value of number which is an int.
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Cast a number to exact size
 * @num: number to cast.
 * @size: number indicating the type to cast
 *
 * Return: Casted value of number which is an unsigned int.
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
