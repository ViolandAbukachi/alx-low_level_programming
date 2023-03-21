#include "main.h"

/**
 * _is lower - check if char is lowercase
 * @c: is the char to be checked
 * rEturn: 1 if char is lowercase, otherwise 0.
 */

int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
