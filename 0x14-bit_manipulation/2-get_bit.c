#include "main.h"

/**
 * get_bit - return the value of bit in given index
 * @n: type unsigned long int input
 * @index: type unsigned int position of unit
 * Return: value of bit in given index or -1 if occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
