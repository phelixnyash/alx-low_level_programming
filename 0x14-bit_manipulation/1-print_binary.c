
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
/*
 * File: 1-print_binary.c
 * 
 */

#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}~
~
~
~
~
~
1-print_binary.c [unix] (02:59 01/01/1970)                             0,0-1 All
"1-print_binary.c" [New]

