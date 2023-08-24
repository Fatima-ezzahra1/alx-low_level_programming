#include "lists.h"
#include <stdio.h>

void _constructor(void) __attribute__ ((constructor));

/**
 * Description : first - prints a sentence before the main
 * _constructor - done befor the main()
 * Return: Nothing
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
