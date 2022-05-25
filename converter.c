#include "main.h"

/**
 * convert - converts number and base
 * @num: input 
 * @base: input
 * @lowercase: flags
 * return: result string
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static chr *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do
	{
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
			}
